```
Suppose that i is a variable of type int, f is a variable of type float, and d is a variable
of type double. Explain what conversions take place during the execution of the following
statement: 
d = i + f;
```

**Solution**  
- Explanation:  
    i + f => int + float = float (int converted to float)  
    (d = float) => (double = float) = double (float promoted to double)  