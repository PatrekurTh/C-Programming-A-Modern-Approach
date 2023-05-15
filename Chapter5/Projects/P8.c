/*
 * Name: P8.c
 * Purpose: Displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
 * Author: PatrekurTH
 */

#include <stdio.h>

int main(void)
{
    int hours, mins, closest_time, closest_d, closest_a, time_diff, user_time,
        f1_d = 480, f1_a = 616,
        f2_d = 583, f2_a = 712,
        f3_d = 679, f3_a = 811,
        f4_d = 767, f4_a = 900,
        f5_d = 840, f5_a = 968,
        f6_d = 945, f6_a = 1175,
        f7_d = 1140, f7_a = 1400,
        f8_d = 1305, f8_a = 1438;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);

    user_time = hours * 60 + mins;
    closest_time = (user_time - f1_d) < 0 ? -(user_time - f1_d) : (user_time - f1_d);
    closest_d = f1_d;
    closest_a = f1_a;

    time_diff = (user_time - f2_d) < 0 ? -(user_time - f2_d) : (user_time - f2_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f2_d;
        closest_a = f2_a;
    }

    time_diff = (user_time - f3_d) < 0 ? -(user_time - f3_d) : (user_time - f3_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f3_d;
        closest_a = f3_a;
    }

    time_diff = (user_time - f4_d) < 0 ? -(user_time - f4_d) : (user_time - f4_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f4_d;
        closest_a = f4_a;
    }

    time_diff = (user_time - f5_d) < 0 ? -(user_time - f5_d) : (user_time - f5_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f5_d;
        closest_a = f5_a;
    }

    time_diff = (user_time - f6_d) < 0 ? -(user_time - f6_d) : (user_time - f6_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f6_d;
        closest_a = f6_a;
    }

    time_diff = (user_time - f7_d) < 0 ? -(user_time - f7_d) : (user_time - f7_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f7_d;
        closest_a = f7_a;
    }

    time_diff = (user_time - f8_d) < 0 ? -(user_time - f8_d) : (user_time - f8_d);
    if (time_diff < closest_time) {
        closest_time = time_diff;
        closest_d = f8_d;
        closest_a = f8_a;
    }

    if (closest_d / 60 > 12)
        printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
                closest_d / 60 - 12, 
                closest_d % 60, 
                closest_a / 60 - 12, 
                closest_a % 60);
    else
        printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", 
                closest_d / 60, 
                closest_d % 60, 
                closest_a / 60, 
                closest_a % 60);

    return 0;
}
