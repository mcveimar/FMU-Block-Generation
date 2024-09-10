% Control Core Parameters
%
% Parameterisation File for the NEx Model
%
% pwm task for PWM generation, PLL, automation, data i/o (15000 Hz)
% fast task for harmonic control at SC (117.1875 Hz)
% control task for voltage control at EC and DC link control at SC (3750 Hz)
% slow task for current control at SC (117.1875 Hz)
%
% Copyright (c) 2024 Third Equation LTD.
%
%
%**************************************************************************
% Revision history
% Date      Author
%**************************************************************************
% 15/02/24  veimar.moreno@thirdequation.com
%           First issue.
%**************************************************************************
%                                                                          
%  Modification history of definition file provided for version matching   
%                                                                         
%  Version  Date        Author      Revision Details                            
%  0.0      15/02/24     VM          Initial issue.                             
% *************************************************************************


%% open dictionary
Simulink.data.dictionary.closeAll;
%dictObj = Simulink.data.dictionary.open([pwd '\fmuGenerationDictionay.sldd']);
dictObj = Simulink.data.dictionary.open('fmuGenerationDictionay.sldd');
dDataSectObj = getSection(dictObj,'Design Data');

% get fast task frequency
% ctrl_tsk_f_obj = getEntry(dDataSectObj,'ctrl_tsk_f');
% ctrl_tsk_f = getValue(ctrl_tsk_f_obj);

%% Parameters
fmu_gen = 1; % 1: fmu generation, 0: simulink 

%-----------------------------------------
% tasks frequency [Hz] and sample time [s]
%-----------------------------------------
if fmu_gen == 1 % As in simulink code
    task_list = {
        'pwm', 15000;       % base frequency
        'fast', 117.186035;   % pwm/128
        'ctrl', 3750;       % pwm/4
        'slow', 117.186035   % pwm/128
    };
else % FMU Generation
    task_list = {
        'pwm', 15002;       % base frequency
        'fast', 4000;   % pwm/128  125
        'ctrl', 4000;       % pwm/4
        'slow', 125    % pwm/128 400
    };
end

% Get task_list dimensions
[task_list_nRow, task_list_nCol] = size(task_list);

% Append task list variables to the dictionary
for idx = 1:task_list_nRow
    % --- Frequency [Hz] ---    
    % Compose variable name
    f_name = [task_list{idx, 1} '_tsk_f'];
    % Get frequency value [Hz]
    f_value = task_list{idx, 2};
    % set variable value
    eval([f_name '= f_value;']);
    % check if the variable exists in the dictionary
    if exist(dDataSectObj, f_name)
         % get dicitonary entry
         entryObj = getEntry(dDataSectObj,f_name);
         % update value
         setValue(entryObj,f_value)
    else
        % append variable to dictionary       
        addEntry(dDataSectObj, f_name, f_value);
    end

    % --- Sample time [s] ---
    % Compose variable name
    st_name = [task_list{idx, 1} '_tsk_st'];
    % Calculate sample time value [s]
    st_value = 1/f_value;
    % round value to eight decimal places
    st_value = round(st_value *1e8)/1e8;    
    % set variable value
    eval([st_name '= st_value;']);
    % check if the variable exists in the dictionary
    if exist(dDataSectObj, st_name)
         % get dicitonary entry
         entryObj = getEntry(dDataSectObj,st_name);
         % update value
         setValue(entryObj,st_value)
    else
        % append variable to dictionary       
        addEntry(dDataSectObj, st_name, st_value);
    end
end

%% EC core control
Tr_nom_v = 230; % [V] Secondary nominal voltage

%% HC core control
shuntHarmonicsCorrected = [3 5 7 9 11 13];
shuntMaxRequestedCurrentrms = 110; % [A]

%% DC Control
% PI
dcBusCtrl.Sum.PGain = 2;
dcBusCtrl.Sum.IGain = 10;

dcBusCtrl.Sum.Num = [0.983519431501171,-1.939492523683982,0.983519431501171];
dcBusCtrl.Sum.Den = [1,-1.939492523683982,0.967038863002343];
dcBusCtrl.Pgain = 0.5;
dcBusCtrl.IGain = 5;
dcBusCtrl.Diff.Num = [0.991691827605293,-1.976427649569530,0.991691827605293];
dcBusCtrl.Diff.Den = [1,-1.976427649569530,0.983383655210586];

%% I core limit
% N/A

%% LC core control
% N/A

%% Current control
prCurrentCtrl.Fc = 1.5;
prCurrentCtrl.Kp = 0.5;
prCurrentCtrl.Kr = 50;
prCurrentCtrl.Num = [ 0.5 -0.9655 0.4657];
prCurrentCtrl.Den = [1 -1.9979 0.9983];
prCurrentCtrl.f0 = 50;

%% add parameters to dictionary Design Data section
var_list = {
    % Trimming transformer
    'Tr_nom_v', Tr_nom_v; % [V] Secondary nominal voltage
    'Tr_max_v', Tr_nom_v*sqrt(2); % [V] Secondary peak voltage
    'Trx_Ratio', 12.6; % turns ratio

    % Modulation signal
    'Max_DC_limit', 400;    % [V] Manual limit

    % DC feed forward
    'DC_ff_max', 1000;   % [V] Maximum value
    'DC_ff_min', 10;    % [V] Maximum value
    
    % DC control
    'dcBusCtrl', dcBusCtrl;



    % Harmonic Correction (HC)
    'shuntMaxRequestedCurrentrms', 110; % [A]
    'shuntHarmonicsCorrected', shuntHarmonicsCorrected;    
    'shuntNumHarmonics', length(shuntHarmonicsCorrected);

    % Current control
    'hpfratio', 1.1;
    'prCurrentCtrl', prCurrentCtrl;
};


% Get var_list dimensions
[var_list_nRow, var_list_nCol] = size(var_list);

% Append task list variables to the dictionary
for idx = 1:var_list_nRow
    f_name = var_list{idx, 1};
    f_value = var_list{idx, 2};
    % set variable value
    eval([f_name '= f_value;']);
    % check if the variable exists in the dictionary
    if exist(dDataSectObj, f_name)
         % get dicitonary entry
         entryObj = getEntry(dDataSectObj,f_name);
         % update value
         setValue(entryObj,f_value)
    else
        % append variable to dictionary       
        addEntry(dDataSectObj, f_name, f_value);
    end
end
% Save changes to the dictionary and close it.
saveChanges(dictObj);
close(dictObj); 
%% Do not clear worspace
