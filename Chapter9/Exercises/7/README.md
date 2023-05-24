```
Suppose that the function f has the following definition:
int f(int a, int b) { … }
Which of the following statements are legal? (Assume that i has type int and x has type
double.)
(a) i = f(83, 12);
(b) x = f(83, 12);
(c) i = f(3.15, 9.28);
(d) x = f(3.15, 9.28);
(e) f(83, 12);
```

**Solution**  
They are all legal with their respective caveats:
a) -  
b) The return value is cast to double  
c) The arguments are cast to int  
d) Arguments and return value are cast to int  
e) Return value is discarded  