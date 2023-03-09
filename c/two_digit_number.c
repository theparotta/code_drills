#include <stdio.h>

int main() {
   int digit, f, l;

   printf("Enter two-digit number: ");
   scanf("%d", &digit);

   l = digit % 10;   // last digit
   f = digit / 10;   // first digit

   printf("Number spelled out as: ");

   // special treatment numbers
   if (f == 1) {
      switch (l) {
         case 0: printf("Ten");        break;
         case 1: printf("Eleven");     break;
         case 2: printf("Twelve");     break;
         case 3: printf("Thirteen");   break;
         case 4: printf("Fourteen");   break;
         case 5: printf("Fifteen");    break;
         case 6: printf("Sixteen");    break;
         case 7: printf("Seventeen");  break;
         case 8: printf("Eighteen");   break;
         case 9: printf("Ninteen");    break;
      }
   }

   // spell out for the number in 10'th position
   switch (f) {
      case 2: printf("Twenty ");  break;
      case 3: printf("Thirty ");  break;
      case 4: printf("Fourty ");  break;
      case 5: printf("Fifty ");   break;
      case 6: printf("Sixty ");   break;
      case 7: printf("Seventy "); break;
      case 8: printf("Eighty ");  break;
      case 9: printf("Ninty ");   break;
   }

   // spell out for the number in 1's position
   if (f == 0 || f > 1) {
      switch (l) {
         case 1: printf("One");   break;
         case 2: printf("Two");   break;
         case 3: printf("Three"); break;
         case 4: printf("Four");  break;
         case 5: printf("Five");  break;
         case 6: printf("Six");   break;
         case 7: printf("Seven"); break;
         case 8: printf("Eight"); break;
         case 9: printf("Nine");  break;
      }
   }

   printf("\n");

   return 0;
}
