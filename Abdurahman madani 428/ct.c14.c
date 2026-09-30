#include <stdio.h>
int main()
{  int age;
   printf("enter your age:");
   scanf("%d",&age);
   if(age>=18)
   {
     printf("you are eligible for vote");
   }
else
    {
      printf("not eligible");
    }
      return 0;
}
