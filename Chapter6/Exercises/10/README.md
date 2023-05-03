```
Show how to replace a continue statement by an equivalent goto statement.
```

**Solution**  
Continue:  
```
/* Prints all the odd numbers in the range 0 - 10 */
for (int i = 0; i <= 10; i++) {
    if (i % 2 == 0)
        continue;
    printf("%d\n", i);
}
```

Goto:  
```
/* Prints all the odd numbers in the range 0 - 10 */
for (int i = 0; i <= 10; i++) {
    if (i % 2 == 0)
        goto end;
    printf("%d\n", i);
    end: ;
}
```