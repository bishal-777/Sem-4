clc;
clear all;
close all;
% Parameters
Amp = 5;
fm = 2; % Message frequency
fc = 10; % Carrier frequency
t = 0:0.001:1;
% Carrier wave
x = Amp .* sin(2 * pi * fc * t);
subplot(3, 1, 1);
plot(t, x);
grid on;
xlabel('Time');
ylabel('Amplitude');
title('Carrier Wave /Bishal Giri/24');
legend("Carrier Wave");
% Message signal (square wave for BPSK) 
y = square(2 * pi * fm * t);
subplot(3, 1, 2);
plot(t, y);
grid on;
xlabel('Time');
ylabel('Amplitude');
title('Message Signal');
legend("Message Signal");
% PSK signal (BPSK modulation) 
a = x .* y;
subplot(3, 1, 3);
plot(t, a);
grid on;
xlabel('Time');
ylabel('Amplitude');
 
title('BPSK Signal /Bishal Giri/24');
legend("BPSK Signal");
