#include <stdio.h>

/* FORMAT STRING ATTACK || Using Single Argument printf */

int main(int argc, char **argv) {
   // argc - no of commandline arguments passed
   // argv - array of string containing each elements

   // Vulnerable form of printf
   printf("Hello %s, %s %s %s %d %d %d\n", "Computer");
   // access values at other memory locations


   // Vulnerable form of printf from user input
   printf(argv[1]);
   printf("\n");

   // Safest form 
   printf("%s\n", argv[1]);

   return 0;
}
