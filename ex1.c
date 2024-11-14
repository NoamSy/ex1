/******************
Name: Noam Sayada
ID: 216308825
Assignment: 1
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  int number;
  int position;
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int output = (number >> position)&1;

  printf("The bit in position %d of number %d is: %d\n", position, number, output);
  /*Scan two integers (representing number and a position)
  Print the bit in this position. */
  
  // Set bit
  printf("\nSet bit:\n");
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int withOne = (1 << position);
  //int withZero = (0 << position);
  int sumOne = number | (withOne); // check if number has already 1, if no -> we will still add it with withOne
  int sumZero = number  & ~(withOne); //check if in number of position provided is 1, if so the & will replace with 0, 0&0 =0
  printf("Number with bit %d set to 1: %d\n", position, sumOne);
  printf("Number with bit %d set to 0: %d\n", position, sumZero);
  /*Scan two integers (representing number and a position)
  Make sure the bit in this position is "on" (equal to 1)
  Print the output
  Now make sure it's "off" (equal to 0)
  Print the output */

  // Toggle bit
  printf("\nToggle bit:\n");
  /*Scan two integers (representing number and a position)
  Toggle the bit in this position
  Print the new number */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("Please enter a position:\n");
  scanf("%d", &position);
  int toggle = number ^ (1 << position); //take the positions number, and then check with XOR if 0 ^ 1 we get 1, if 1 ^ 1 we get 0
  printf("Number with bit %d toggled: %d \n", position, toggle);


  // Even - Odd
  printf("\nEven - Odd:\n");
  /* Scan an integer
  If the number is even - print 1, else - print 0. */
  printf("Please enter a number:\n");
  scanf("%d", &number);
  printf("%d\n", ((number & 1)^1)); //get last number, we learned at lesson if last bit = 1 then its odd number, if last bit = 0 then its even number

  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  /* Scan two integers in octal base
  sum them up and print the result in hexadecimal base
  Print only 4 bits, in positions: 3,5,7,11 in the result. */
  int number2;
  printf("Please enter the first number (octal):\n");
  scanf("%o", &number);
  printf("Please enter the second number (octal):\n");
  scanf(" %o", &number2);
  int sum = number + number2;
  int thirdBit = 1 & (sum >> 3);
  int fithBit = 1 & (sum >> 5);
  int seventhBit = 1 & (sum >> 7);
  int eleventhBit = 1 & (sum >> 11);
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n", thirdBit, fithBit, seventhBit, eleventhBit);
  printf("Bye!\n");
  return 0;
}
