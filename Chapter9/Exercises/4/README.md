```
Write a function day_of_year(month, day, year) that returns the day of the year
(an integer between 1 and 366) specified by the three arguments.
```

**Solution**
``` C
int day_of_year(int month, int day, int year)
{
    int m;
    bool leap_year = (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
    const int days[12] = {31, leap_year ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (m = 0; m < month - 1; m++)
        day += days[m];

    return day;
}
```