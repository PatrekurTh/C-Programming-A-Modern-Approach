```
If c is a variable of type char, which one of the following statements is illegal?
(a) i += c; /* i has type int */
(b) c = 2 * c - 1;
(c) putchar(c);
(d) printf(c);
```

**Solution**  
(d) printf(c) is illegal, printf must be supplied a format string as its first argument  
but C treats characters as small integers.  