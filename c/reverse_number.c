/* To reverse the entered number */
#include <stdio.h>

int main() {
   int num;

   printf("Enter a number to reverse: ");
   scanf("%d", &num);

   printf("Reversed number: ");

   while (num) {
      printf("%d", num%10);
      num /= 10;
   }
   printf("\n");

   return 0;
}
