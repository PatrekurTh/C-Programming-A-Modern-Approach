```
Write a function check(x, y, n) that returns 1 if both x and y fall between 0 and n – 1,
inclusive. The function should return 0 otherwise. Assume that x, y, and n are all of type
int.
```

**Solution**
``` C
int check(int x, int y, int n)
{
    return (0 <= x && x <= n - 1) && (0 <= y && y <= n - 1);
}
```