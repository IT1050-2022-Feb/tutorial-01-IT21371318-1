/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
  int sb1, sb2;
  float avg;

  printf("Enter Subject 01 :-");
  scanf("%d", &sb1);

  printf("Enter Subject 02 :-");
  scanf("%d", &sb2);

  avg = (sb1 + sb2) / 2.0;
  printf("Average Marks :- %.2f", avg);

  return 0;
}