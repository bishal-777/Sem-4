clc;
close all;
clear all;

i = 1;
for t = -2:0.001:2
    if (t >= 0)
        x(i) = t;
    else
        x(i) = 0;
    end
    i = i+1;
end

t = -2:0.001:2;
subplot(2,1,1);
plot(t, x)
xlabel('time');
ylabel('amplitude');
title('CT ramp/Bishal Giri/24');
grid on;

i = 1;
for t = -2:0.001:2
    if (t >= 0)
        x(i) = t;
    else
        x(i) = 0;
    end
    i = i+1;
end

t = -2:0.001:2;
subplot(2,1,2);
stem(t, x)
xlabel('time');
ylabel('amplitude');
title('DT ramp/Bishal Giri/24');
grid on;