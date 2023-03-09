#include <stdio.h>

int main() {
   int d1, d2, m1, m2, y1, y2;

   printf("Enter First date (DD/MM/YY): ");
   scanf("%d/%d/%d", &d1, &m1, &y1);
   printf("Enter Second date (DD/MM/YY): ");
   scanf("%d/%d/%d", &d2, &m2, &y2);

   if (y1 == y2) {

      // Month comparison to follow
      if (m1 == m2) {

         // Date comparison to follow
         if (d1 == d2)
            printf("%d/%d/%.2d is same as %d/%d/%.2d", d2,m2,y2,d1,m1,y1);
         else if (d1 > d2)
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d2,m2,y2,d1,m1,y1);
         else
            printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d1,m1,y1,d2,m2,y2);

      } else if (m1 > m2) 
         printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d2,m2,y2,d1,m1,y1);
      else
         printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d1,m1,y1,d2,m2,y2);

   } else if (y1 > y2)
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d2,m2,y2,d1,m1,y1);
   else
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d1,m1,y1,d2,m2,y2);

   printf("\n");

   return 0;
}
