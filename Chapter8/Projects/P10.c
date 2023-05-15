/*
 * Name: P10.c
 * Purpose: Displays the departure and arrival times for the flight whose departure time is closest to that entered by the user:
 * Author: PatrekurTH
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE (int) (sizeof(departure) / sizeof(departure[0]))

int main(void)
{
    int hours, mins, time_diff, user_time, time, closest_idx = 0;
    const int departure[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
                arrival[8] = {616, 712, 811, 900, 968, 1175, 1400, 1438};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);

    user_time = hours * 60 + mins;

    for (time = 0; time < SIZE; time++) {
        time_diff = abs(user_time - departure[time]); /* fabs was used in chapter 7 */
        if (time_diff < abs(user_time - departure[closest_idx]))
            closest_idx = time;
    }

    if (departure[closest_idx] / 60 > 12)
        printf("Closest departure time is %d:%.2d p.m., arriving at %d:%.2d p.m.\n", 
                departure[closest_idx] / 60 - 12, 
                departure[closest_idx] % 60, 
                arrival[closest_idx] / 60 - 12, 
                arrival[closest_idx] % 60);
    else
        printf("Closest departure time is %d:%.2d a.m., arriving at %d:%.2d a.m.\n", 
                departure[closest_idx] / 60, 
                departure[closest_idx] % 60, 
                arrival[closest_idx] / 60, 
                arrival[closest_idx] % 60);

    return 0;
}
