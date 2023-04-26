```
If i and j are positive integers, does (-i)/j always have the same value as -(i/j)? Justify your answer
```

**Solution**  
It depends on the standard. C99 will always truncate towards 0 so no problem there  
However the C89 standard might have two possible outcomes  
For example i = 2, j = 3  
then (-2)/3 could be either 0 or -1, but -(2/3) will always yield 0  