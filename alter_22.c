#include <stdio.h>  
  
int main()  
{  
    int a, b, larger;  
  
    printf("Enter 2 numbers\n");  
    scanf("%d%d", &a, &b);  
  
    (a > b) ? (larger = a) : (larger = b);  
  
    printf("Largest of %d and %d is %d\n", a, b, larger);  
  
    return 0;  
}  