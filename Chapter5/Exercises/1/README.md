```
The following program fragments illustrate the relational and equality operators. Show the
output produced by each, assuming that i, j, and k are int variables.
(a) i = 2; j = 3;
k = i * j == 6;
printf("%d", k);
(b) i = 5; j = 10; k = 1;
printf("%d", k > i < j);
(c) i = 3; j = 2; k = 1;
printf("%d", i < j == j < k);
(d) i = 3; j = 4; k = 5;
printf("%d", i % j + i < k);
```

**Solutions**  
(a) 1 
- Explanation:  
    Arithmetic operators higher precedence than equality operators  
    (i * j) => (2 * 3) = 6  
    (6 == 6) = 1

(b) 1  
- Explanation:  
    Relational operators are left associative  
    (k > i) => (1 > 5) = 0
    (0 < 10) = 1
  
(c) 1  
- Explanation:  
    Equality operators lower precedence than the relational operators  
    (i < j) => (3 < 2) = 0  
    (j < k) => (2 < 1) = 0  
    0 == 0 = 1  

(d) 0  
- Explanation:  
    multiplicative operators higher precedence than additive  
    arithmetic higher than relational  
    (i % j) => (3 % 4) = 3  
    (3 + i) => (3 + 3) = 6  
    (6 < k) => (6 < 5) = 0  