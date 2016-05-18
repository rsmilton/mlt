

#include <stdio.h>
 
int add_digits(int n);
 
void main() 
{
  int n, result;
 printf("\n Enter the integer\n");
  scanf("%d", &n);

  result = add_digits(n);
while(result>9)
{
result=add_digits(result);
}
 
  printf("%d\n", result);
 
 }
 
int add_digits(int n) {
  static int sum = 0;
 
  if (n == 0) {
    return 0;
  }
 
  sum = n%10 + add_digits(n/10);
 
  return sum;
}
  
