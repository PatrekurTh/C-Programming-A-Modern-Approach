```
Suppose that i is a variable of type int, j is a variable of type long, and k is a variable of
type unsigned int. What is the type of the expression i + (int) j * k?
```

**Solution**  
unsigned int
- Explanation: 
    (int) j * k => int * uint = unsigned int (int converted to unsigned int)  
    i + unsigned int => int + unsigned int = unsigned int (int converted to unsigned int)  