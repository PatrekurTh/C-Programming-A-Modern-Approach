```
Write a function num_digits(n) that returns the number of digits in n (a positive inte-
ger). Hint: To determine the number of digits in a number n, divide it by 10 repeatedly.
When n reaches 0, the number of divisions indicates how many digits n originally had
```

**Solution**  
``` C
int num_digits(unsigned int n)
{
    int count = 0;

    /* do while loop to ensure input 0 will count as 1 digit */
    do
        count++;
    while (n /= 10);

    return count;
}
```