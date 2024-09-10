% current inbalance
t = 0:0.001: 0.08;
wt = 2*pi*50*t;
g = 2*pi/3;
a= 50*sin(wt);
b= 50*sin(wt-g);
c= 50*sin(wt+g);

figure
plot(t,a,t,b,t,c)

a1= 45*sin(wt);
b1= 33*sin(wt-g);
c1= 72*sin(wt+g);


figure
plot(t,a1,t,b1,t,c1)

% voltge inbalance
va= 230*sin(wt);
vb= 230*sin(wt-g);
vc= 230*sin(wt+g);
figure
plot(t,va,t,vb,t,vc)
grid
va1= 250*sin(wt);
vb1= 235*sin(wt-g-pi/10);
vc1= 211*sin(wt+g-pi/15);

figure
plot(t,va1,t,vb1,t,vc1)
grid