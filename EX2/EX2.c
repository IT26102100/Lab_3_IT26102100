#include <stdio.h>

int main()
{
        double speed_kmh, speed_ms;
        double distance;
        double acceleration, time;

        printf("Enter takeoff speed(km/hr): ");
        scanf("%lf", &speed_kmh);

        printf("Enter acceleration distance (m): ");
        scanf("%lf", &distance);

        speed_ms = speed_kmh * 1000.0 / 3600.0;
        acceleration = (speed_ms * speed_ms) / (2 * distance);
        time = speed_ms / acceleration;

        printf("Acceleration: %.2lf m/s^2\n", acceleration);
        printf("Time to reach takeoff speed: %.2lf s\n", time);

        return 0;
}
