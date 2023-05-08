```
Does the following statement always compute the fractional part of f correctly (assuming
that f and frac_part are float variables)?
frac_part = f - (int) f;
If not, what’s the problem?
```

**Solution**  
No, since largest value of float is 3.40282 × 10^38^ and smallest 1.17549 × 10^–38^  
while int is 2,147,483,647 (2.147483647×10^9^) and –2,147,483,648 (-2.147483648×10^9^)  
f could be far larger (or smaller) than fits into an int