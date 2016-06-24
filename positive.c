#include <stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
  if (a<=0)
    {
      if (a== 0)
      {
            printf("The number entered is Zero.");
      }
     else
        {
            printf("The number entered is Negative.");
        }
    }
    else
    {
        printf("The number entered is positive.");
    }
    getch();
}
