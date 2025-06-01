clc;
close all;
clear all;

a = 5;
f = 20;
t = (-1:0.01:1);
unitstep = t >= 0

subplot(2, 1, 1);
plot(t, unitstep);
xlabel('time');
ylabel('amplitude');
title('Unit step/Bishal Giri/24');
legend(' CT Unit step');
grid on;

t = (-1:0.01:1);
unitstep = t >= 0

subplot(2, 1, 2);
stem(t, unitstep);
xlabel('time');
ylabel('amplitude');
title('Unit step/Bishal Giri/24');
legend(' DT Unit step');
grid on;