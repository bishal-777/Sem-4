clc;
close all;
clear all;

i = 1;
for t = -2:0.001:2
    if (abs(t) > 1)
        x(i) = 0;
    else
        x(i) = 1;
    end
    i = i+1;
end

t = -2:0.001:2;
plot(t, x)
xlabel('time');
ylabel('amplitude');
title('CT Square/Bishal Giri/24');
grid on;
