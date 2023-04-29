```
What output does the following program fragment produce? (Assume that i is an integer
variable.)
i = 1; 
switch (i % 3) {
 case 0: printf("zero");
 case 1: printf("one");
 case 2: printf("two");
}
```

**Solution**  
onetwo
- Explanation:
    no break statements cause fallthrough, so since 1 % 3 is 1, case 1 will match and run everything after it.