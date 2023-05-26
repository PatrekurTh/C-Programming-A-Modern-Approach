```
Consider the following “mystery” function:
void pb(int n)
{
    if (n != 0) {
    pb(n / 2);
    putchar('0' + n % 2);
    }
}
Trace the execution of the function by hand. Then write a program that calls the function,
passing it a number entered by the user. What does the function do?
```

**Solution**
- Trace with n = 5:  
    call pb(2);  
        call pb(1);  
            call pb(0);  
                return;  
            putchar('0' + 1) // output 1  
        putchar('0' + 0)     // output 0  
    putchar('0' + 1)         // output 1  
Seems to print the binary representation of n  
Running [main.c](main.c) confirms this.  