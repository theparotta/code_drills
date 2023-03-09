/*
 * BILL SPLITUPS
 * --------------
 * 500 RS
 * 200 RS
 * 100 RS
 * 50 RS
 * 20 RS
 * 10 RS
 * 5 RS
 * 1 RS
 */
#include <stdio.h>

int main() {
   int amount = 0, rem = 0;

   printf("Enter the total amount (INR): ");
   scanf("%d", &amount);

   printf("500 INR bills: %d\n", amount/500);
   rem = amount % 500;

   printf("200 INR bills: %d\n", rem/200);
   rem %= 200;

   printf("100 INR bills: %d\n", rem/100);
   rem %= 100;

   printf(" 50 INR bills: %d\n", rem/50);
   rem %= 50;

   printf(" 20 INR bills: %d\n", rem/20);
   rem %= 20;

   printf(" 10 INR bills: %d\n", rem/10);
   rem %= 10;

   printf("  5 INR bills: %d\n", rem/5);
   rem %= 5;

   printf("  1 INR bills: %d\n", rem);

   return 0;
}
