```
The following function, which computes the area of a triangle, contains two errors. Locate
the errors and show how to fix them. (Hint: There are no errors in the formula.)
double triangle_area(double base, height)
double product;
{
 product = base * height;
 return product / 2;
}
```

**Solution**
1. The variable product is defined outside the triangle_area declaration, causing an error.  
This can be fixed by moving `double product;` into the triangle_area declaration.  
2. The type of the parameter height is not specified.  
This can be fixed by specifying `double height;`.  