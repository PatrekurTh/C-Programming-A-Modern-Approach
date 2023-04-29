```
The following program fragments illustrate the logical operators. Show the output produced
by each, assuming that i, j, and k are int variables.
(a) i = 10; j = 5;
printf("%d", !i < j);
(b) i = 2; j = 1;
printf("%d", !!i + !j);
(c) i = 5; j = 0; k = -5;
printf("%d", i && j || k);
(d) i = 1; j = 2; k = 3;
printf("%d", i < j || k);
```

**Solutions**  
(a) 1  
- Explanation:  
    !i = 0  
    j = 5  
    result is 0 < 5 

(b) 1  
- Explanation:  
    !(!i) => !(!2) => !(0) = 1  
    !j => !1 = 0  
    result is 1 + 0

(c) 1  
- Explanation:  
    The relational operators are left associative.  
    (i && j) => (5 and 0) = 0  
    (0 || k) => (0 or -5) = 1 (any non-zero is true)

(d) 1  
- Explanation:  
    The relational operators are left associative.  
    (i < j) => (1 < 2) = 1  
    (1 || k) => (1 or 3) = 1 (short-circuit applies here)
