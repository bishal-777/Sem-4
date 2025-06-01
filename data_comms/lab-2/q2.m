%Plot CT & DT sine & cosine
clc;
close all;
clear all;

a = 5;
f = 3;
t=0:0.01:1;

x = a*sin(2*pi*f*t);
subplot(3, 1, 1);
plot(t, x, 'BLUE');
xlabel('time');
ylabel('amplitude');
title('Sine Wave/Bishal Giri/24');
grid on;

z = rand(1, length(t));
subplot(3, 1, 2);
plot(t, z, 'RED');
xlabel('time');
ylabel('amplitude');
title('Noise Wave/Bishal Giri/24');
grid on;

a = x+z;
subplot(3, 1, 3);
plot(t, a, 'BLACK');
xlabel('time');
ylabel('amplitude');
title('Noise added Sine/Bishal Giri/24');
grid on;