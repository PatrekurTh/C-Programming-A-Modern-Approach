```
What output does the following program fragment produce?
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
} 
printf("%d\n", sum);
```

**Solution**  
20
- Explanation:  
    (i % 2) is true (1) when i is odd, skipping them in the sum of range 0 - 9
