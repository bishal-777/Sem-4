%Plot CTV & DT sine & cosine
clc;
close all;
clear all;
a = 5;
f = 3;
t=0:0.01:1;

x = a*sin(2*pi*f*t);
y = a*cos(2*pi*f*t);
subplot(2, 2, 1);
plot(t, x);
xlabel('time');
ylabel('amp');
title('CT Sine/Bishal Giri/24');
grid on;

subplot(2, 2, 2);
stem(t, x);
xlabel('time');
ylabel('amp');
title('DT Sine/Bishal Giri/24');
grid on;

subplot(2, 2, 3);
plot(t, y);
xlabel('time');
ylabel('amp');
title('CT Cos/Bishal Giri/24');
grid on;

subplot(2, 2, 4);
stem(t, y);
xlabel('time');
ylabel('amp');
title('DT Cos/Bishal Giri/24');
grid on;