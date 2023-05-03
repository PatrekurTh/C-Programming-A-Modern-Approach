```
What output does the following for statement produce?
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

**Solution**  
10 5 3 2 1 1 1 1 ...  
- Explanation:  
    The trace:  
    i = 10 <- prints 10, increment i by 1  
    i => 11 / 2 = 5 <- prints 5, increment by 1  
    i => 6 / 2 = 3 <- prints 3, increment by 1  
    i => 4 / 2 = 2 <- prints 2, increment by 1  
    i => 3 / 2 = 1 <- prints 1, increment by 1  
    i => 2 / 2 = 1 <- prints 1, increment by 1  
    i => 2 (now it's an infinite loop of 1's);  
    