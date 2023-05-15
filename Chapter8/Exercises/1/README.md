```
We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the num-
ber of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type
of a’s elements, would also work, but it’s considered an inferior technique. Why?
```

**Solution**
If change were to happen to the type of a's elements, the latter expression would need to be updated aswell.  
(King's answer -> it might not be obvious that t is in fact the types of the elements of a )