/* 
 * European Article Number(EAN) ia a 13 digit code. Each EAN ends with a check
 * digit. The technique for finding the check digit was
 *   1. Add the second, fourth, sixth, eighth, tenth and the twelth digit
 *   2. Add the first, third, fifth, seventh, ninth and eleventh digit
 *   3. Multiply first sum by 3 snd add it to second sum
 *   4. Substract 1 from the total
 *   5. Compute the remainder when adjusted total is divided by 10
 *   6. Subtract the remainder form 9
 *
 */
#include <stdio.h>

int main() {
   int b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, check_digit;

   printf("Enter the 12 digits of EAN: ");
   scanf("%1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d %1d", 
         &b1, &b2, &b3, &b4, &b5, &b6, &b7, &b8, &b9, &b10, &b11, &b12);

   check_digit = (b2+b4+b6+b8+b10+b12) * 3;
   check_digit += (b1+b3+b5+b7+b9+b11);
   check_digit--;
   check_digit %= 10;
   check_digit = 9 - check_digit;

   printf("Check digit: %d\n", check_digit);

   return 0;

}
