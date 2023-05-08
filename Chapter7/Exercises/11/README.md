```
Suppose that i is a variable of type int, f is a variable of type float, and d is a variable
of type double. What is the type of the expression i * f / d?
```

**Solution**  
double
- Explanation:  
    i * f => int * float = float (int converted to float)  
    float / d => float / double = double (float promoted to double)  