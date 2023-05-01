```
What output does the following for statement produce?
for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);
```

**Solution**  
5 4 3 2  
- Explanation:  
    Start with i = 5 and j = 4  
    Every iteration checks only for j > 0 (Using the comma operator, the first expression is evaluated then its value is discarded; the second expression is the value of the entire expression)  
    Every iteration decrements i and then assigns j to i - 1  
    The trace:  
        i = 5, j = 4 <- prints 5  
        i = 4, j = 3 <- prints 4  
        i = 3, j = 2 <- prints 3  
        i = 2, j = 1 <- prints 2  
        i = 1, j = 0 <- !(j > 0) Stops