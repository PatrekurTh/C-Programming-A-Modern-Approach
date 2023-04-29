```
Is the following if statement legal?
if (n >= 1 <= 10)
 printf("n is between 1 and 10\n");
If so, what does it do when n is equal to 0?
```

**Solution**  
Legal yes, but correct no.  
The relational operators are left associative, so (n >= 1 <= 10) is evaluated as ((n >= 1) <= 10)  
which results in (1 or 0 depending on n) <= 10 which is always true or 1 regardless of n.  