#include <stdio.h>

int main() {
   int d, m, y;

   printf("Enter date (DD/MM/YY): ");
   scanf("%d /%d /%d", &d, &m, &y);

   printf("Dated this %d", d);

   // switch to postfix the day number
   switch (d) {
      case 1:
      case 12:
      case 31:
         printf("'st");
         break;
      case 2:
      case 22:
         printf("'nd");
         break;
      case 3:
      case 23:
         printf("'rd");
      default:
         printf("'th");
   }

   printf(" day of ");

   // switch to identify the month name
   switch (m) {
      case 1: printf("January");   break;
      case 2: printf("Feburary");  break;
      case 3: printf("March");     break;
      case 4: printf("April");     break;
      case 5: printf("May");       break;
      case 6: printf("June");      break;
      case 7: printf("July");      break;
      case 8: printf("August");    break;
      case 9: printf("Septemer");  break;
      case 10: printf("October");  break;
      case 11: printf("November"); break;
      case 12: printf("December"); break;
   }

   printf(", 20%d.\n", y);

   return 0;
}
