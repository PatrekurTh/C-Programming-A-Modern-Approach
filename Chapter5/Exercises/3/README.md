```
The following program fragments illustrate the short-circuit behavior of logical expressions.
Show the output produced by each, assuming that i, j, and k are int variables.
(a) i = 3; j = 4; k = 5;
printf("%d ", i < j || ++j < k);
printf("%d %d %d", i, j, k);
(b) i = 7; j = 8; k = 9;
printf("%d ", i - 7 && j++ < k);
printf("%d %d %d", i, j, k);
(c) i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d", i, j, k);
(d) i = 1; j = 1; k = 1;
printf("%d ", ++i || ++j && ++k);
printf("%d %d %d", i, j, k);
```

**Solutions**  
(a) 1 3 4 5  
- Explanation:  
    (i < j) || ((++j) < k)  
    (3 < 4) || ((5) < 5)  
       1    ||     0 (short circuit so no ++j)

(b) 0 7 8 9  
- Explanation:  
    (i - 7) && (j++ < k)  
    (7 - 7) && (8 < 9)  
        0   &&   1  (short circuit so no j++)

(c) 1 8 8 9
- Explanation:  
    (i = j) || (j = k)  
    (i = 8) || (j = 9)  
       8    ||    9    (short circuit so no j = k)

(d) 1 2 1 1
- Explanation:  
    logical and has higher presedence than logical or  
    (++i) || ((++j) && (++k))  
    (  2   ||   2)   &&   2  
            1        &&   2  (short circuit so no ++j or ++k)
