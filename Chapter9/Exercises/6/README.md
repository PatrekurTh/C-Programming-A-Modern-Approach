```
Write a function digit(n, k) that returns the kth digit (from the right) in n (a posi-
tive integer). For example, digit(829, 1) returns 9, digit(829, 2) returns 2, and
digit(829, 3) returns 8. If k is greater than the number of digits in n, have the func-
tion return 0.
```

**Solution**  
``` C
int digit(int n, int k)
{
    while (--k) {
        n /= 10;
    }

    return n % 10;
}
```