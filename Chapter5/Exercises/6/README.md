```
Is the following if statement legal?
if (n == 1-10)
 printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 5?
```

**Solution**  
Yes it's legal, but evaluated as (n == (1-10)) which just tests if n is -9, so for any other n the result is 0  