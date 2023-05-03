```
Find the error in the following program fragment and fix it.
if (n % 2 == 0);
    printf("n is even\n");
```

**Solution**  
The trailing ; of the if statement ends it, making the body of it a null statement.