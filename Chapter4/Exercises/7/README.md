```
The algorithm for computing the UPC check digit ends with the following steps:
Subtract 1 from the total.
Compute the remainder when the adjusted total is divided by 10.
Subtract the remainder from 9.
It’s tempting to try to simplify the algorithm by using these steps instead:
Compute the remainder when the total is divided by 10.
Subtract the remainder from 10.
Why doesn’t this technique work?
```

**Solution**
Because the order of the calculations matters.

For example, taking an arbitrary number of 30 after going through the first steps. 
Now, subtracting 1, dividing by 10 and subract the remainder from 9:
- 30 - 1 = 29
- 29 % 10 = 9
- 9 - 9 = 0  

Or dividing by 10 and then subtract the remainder from 10: 
- 30 % 10 = 0
- 10 - 0 = 10