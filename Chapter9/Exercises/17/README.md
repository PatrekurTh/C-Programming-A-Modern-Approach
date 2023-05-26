```
Rewrite the fact function so that it’s no longer recursive.
```

**Solution**
```
int fact(int n)
{
    int sum = 1;

    while (n > 1)
        sum *= n--;

    return sum;
}
```