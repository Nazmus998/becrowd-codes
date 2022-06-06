#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if divisible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap years
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
/*#include <stdio.h>
int main ()
{
    int n;
    printf("enter the year:");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0)
    { 
        printf("%d is a leap year\n",n);
    }
    
    else if (n%4==0 && n%100==0 && n%400==0)
    {
        printf("%d is  a leap year",n);
    }
    else
    {
        printf("%d is not a leap year ",n);
    } */
}
/*#include <stdio.h>
int main() {
  
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
  
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
  
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}*/