

#include <stdio.h>

void main()
{
 int i,a[5],b[5],c[5],j,t;
printf("\n Enter 5 values");
 printf("\nReading the 1st array\n");
 for (i=0;i<5;i++)
   {
   printf("Enter the  value");
   scanf("%d",&a[i]);
   }
 printf("\nReading the 2nd array\n");
 for (i=0;i<5;i++)
   {
   printf("Enter the  value");
   scanf("%d",&b[i]);
   }

for (i = 0; i < 5; ++i)

    {

        for (j = i + 1; j < 5; ++j)

        {

            if (b[i] < b[j])

            {

                t = b[i];

              b[i] = b[j];

               b[j] = t;

            }

        }

    }
printf("The numbers arranged in descending order are given below\n");

    for (i = 0; i < 5; ++i)

    {

        printf("%d\n", b[i]);

    }

   printf("\nThe output of addition of 2 array is\n");
   for(i=0;i<5;i++)
     {
     c[i]=a[i]+b[i];
     printf("\nthe sum of %d & %d is %d",a[i],b[i],c[i]);
     }
    
}

