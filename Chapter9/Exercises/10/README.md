```
Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
```

**Solution**  
a)  
``` C
int largest(int a[], int n)
{
    int i, l = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > l)
            l = a[i];
    }

    return l;
}
```  
b)  
``` C
int average(int a[], int n)
{
    int i, sum;

    for (i = 0; i < n; i++)
        sum += a[i];

    return sum / n;
}
```
c)  
``` C
int positives(int a[], int n)
{
    int i, total = 0;

    for (i = 0; i < n; i++)
        if (a[i] > 0)
            total++;

    return total;
}
```
