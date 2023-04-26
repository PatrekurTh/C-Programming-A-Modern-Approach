```
Suppose that we call scant as follows: 
scanf("%d%f%d", &i, &x, &j); 
If the user enters
10.3 5 6 
what will be the values of i, x, and j after the call? (Assume that i and j are int variables 
and x is a float variable.) 
```

**Solution**  
i = 10;  i will take 10, peek the . and return it since it doesn't belong to an int  
x = 0.3; x will start looking at . then 3 and finally space resulting in .3  
j = 5;   j will take the next value which is 5  