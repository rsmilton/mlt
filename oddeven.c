#include <stdio.h>

void main()
{
char p[20];
int i=0,even=0,odd=0,n;
scanf("%d",&n);
sprintf(p,"%d",n);
while(p[i] != '\0')
{
    if(i%2 == 0)
    odd+= (p[i] - '0');
    else
    even+= (p[i] - '0');

    i++;
}
printf("Sum of Even numbers %d\n",even);
printf("Sum of odd numbers %d\n",odd);
}




