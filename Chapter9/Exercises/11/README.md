```
Write the following function:
float compute_GPA(char grades[], int n);
The grades array will contain letter grades (A, B, C, D, or F, either upper-case or lower-
case); n is the length of the array. The function should return the average of the grades
(assume that A = 4, B = 3, C = 2, D = 1, and F = 0).
```

**Solution**
``` C
float compute_GPA(char grades[], int n)
{
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        switch (toupper(grades[i])) {
            case 'A':
                sum += 4; break;
            case 'B':
                sum += 3; break;
            case 'C':
                sum += 2; break;
            case 'D':
                sum++; break;
        }
    }

    return (float) sum / n;
}
```