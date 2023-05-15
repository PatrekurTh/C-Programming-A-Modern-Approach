```
Using the array of Exercise 8, write a program fragment that computes the average tempera-
ture for a month (averaged over all days of the month and all hours of the day).
```

**Solution**
``` C
#define DAYS 30
#define HOURS 24

int i, j;
double avg, sum = 0.0;

for (i = 0; i < DAYS; i++)
    for (j = 0; j < HOURS; j++)
        sum += temperature_readings[i][j];

avg = sum / (DAYS * HOURS);
```