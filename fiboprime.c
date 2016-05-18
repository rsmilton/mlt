#include<stdio.h>
 
void main()
{
   int n, first = 0, second = 1, next, c,i,count=0;
 
   printf("Enter the number of terms\n");
   scanf("%d",&n);
 
   printf("First %d terms of Fibonacci series are :-\n",n);
 
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
	
 for(i=2;i<=next/2;i++){
        if(next%i==0){
         count++;
            break;
        }
    }
   if(count==0 && next!= 1)
      printf("%d\n",next);
   }
 
}
