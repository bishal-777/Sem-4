clc;
close all;
clear all;

i = 1;
for t = -2:0.001:2
    if (t == 0)
        x(i) = 1;
    else
        x(i) = 0;
    end
    i = i+1;
end

t = -2:0.001:2;
plot(t, x)
xlabel('time');
ylabel('amplitude');
title('Unit impulse/Bishal Giri/24');
grid on;