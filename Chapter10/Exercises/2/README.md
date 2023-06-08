```
The following program outline shows only function definitions and variable declarations.

int b, c;

void f(void)
{
    int b, d;
}

void g(int a)
{
    int c;
    {
        int a, d;
    }
}

int main(void)
{
    int c, d;
}

For each of the following scopes, list all variable and parameter names visible in that scope.
If there’s more than one variable or parameter with the same name, indicate which one is
visible.
(a) The f function
(b) The g function
(c) The block in which a and d are declared
(d) The main function
```

**Solutions**  
a) automatic b, d and external c  
b) parameter a, external b, automatic c  
c) automatic a, d, external c (from g()), b  
d) external b, automatic c, d  