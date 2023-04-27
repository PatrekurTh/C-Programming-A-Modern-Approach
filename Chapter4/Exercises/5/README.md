```
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
(a) 8 % 5
(b) -8 % 5
(c) 8 % -5
(d) -8 % -5
```

**Solutions**
*The sign of i % j in C89 depends on the implementation. (For example, the value of -9 % 7 could be either –2 or 5).*

(a) 3
- 8 = 5 * 1 + 3

(b) -3 or 2
- -8 = 5 * (-2) + 2
- -8 = 5 * (-1) - 3

(c) 3 or -2
- 8 = -5 * (-2) - 2
- 8 = -5 * (-1) + 3

(d) -3 or 2
- -8 = -5 * 1 - 3
- -8 = -5 * 2 + 2