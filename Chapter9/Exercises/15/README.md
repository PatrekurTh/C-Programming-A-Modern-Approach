```
The following (rather confusing) function finds the median of three numbers. Rewrite the
function so that it has just one return statement.
double median(double x, double y, double z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z) return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
```

**Solution**  
```
double median(double x, double y, double z)
{
    double med = z;

    if (x <= y && y <= z || z <= y && y <= x)
        med = y;
    else if (y <= x && x <= z || z <= x && x <= y)
        med = x;

    return med;
}
```