```
Suppose that we call scanf as follows: 
scanf("%f%d%f", &x, &i, &y); 
If the user enters 
12.3 45.6 789
what will be the values of x, i, and y after the call? (Assume that x and y are float vari-
ables and i is an int variable.)
```

**Solution**  
x = 12.3; nothing special here  
i = 45;   will collect 45, peek at . and return it  
y = 0.6;  will start at . then 6 and finally white space