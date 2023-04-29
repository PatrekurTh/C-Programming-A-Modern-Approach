```
Write a single expression whose value is either –1, 0, or +1, depending on whether i is less
than, equal to, or greater than j, respectively.
```

**Solution**  
-(i < j) + (i > j)  

- Explanation:  
    |  | -(i < j) | + | (i > j)  |  = |
    |---|---|---|---|---|
    | i < j  |  -1 |   | 0  | -1 |
    | i > j  | -0  |   | 1  | 1  |
    | i == j |  -0 |   | 0  | 0 |