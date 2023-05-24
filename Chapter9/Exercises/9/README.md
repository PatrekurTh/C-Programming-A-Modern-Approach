```
What will be the output of the following program?

#include <stdio.h>

void swap(int a, int b);

int main(void)
{
 int i = 1, j = 2;
 swap(i, j);
 printf("i = %d, j = %d\n", i, j);
 return 0;
}

void swap(int a, int b)
{
 int temp = a;
 a = b;
 b = temp;
}
```

**Solution**
i = 1, j = 2
- Explanation:  
    i and j get copied into a and b, thus swap has no effect on them.