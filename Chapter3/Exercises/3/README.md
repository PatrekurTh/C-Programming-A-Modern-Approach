```
For each of the following pairs of scanf format strings, indicate whether or not the two 
strings are equivalent. If they're not, show how they can be distinguished. 
(a) "%d"       versus " %d" 
(b) "%d-%d-%d" versus "%d -%d -%d" 
(c) "%f"       versus "%f "
(d) "%f,%f"    versus "%f, %f"
```

**Solutions**  
(a) Equivalent  
(b) Equivalent
(c) Not equivalent, the latter will read in a float but then hang until a non white space character is sent.
(d) Equivalent