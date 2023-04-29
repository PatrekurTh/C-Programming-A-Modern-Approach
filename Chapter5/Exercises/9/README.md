```
Are the following if statements equivalent? If not, why not?
if (score >= 90)        if (score < 60)
    printf("A");            printf("F");
else if (score >= 80)   else if (score < 70)
    printf("B");            printf("D");
else if (score >= 70)   else if (score < 80)
    printf("C");            printf("C");
else if (score >= 60)   else if (score < 90)
    printf("D");            printf("B");
else                    else
    printf("F");            printf("A");
```

**Solution**  
Yes, they are both checking the same intervals just in different order.  
| Score | Left Out | Right Out | 
|---|---|---|
| < 60 | F  |  F |  
| < 70  | D  | D  |  
| < 80  | C  | C  |  
| < 90  | B  | B  |  
| >= 90  | A  | A  |  