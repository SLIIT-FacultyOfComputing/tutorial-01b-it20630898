/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2;
  int sum = 0;
  float ave = 0;

  printf("Enter the 1st mark:");
  scanf("%d",&mark1);
  printf("Enter the 2nd mark:");
  scanf("%d",&mark2);

  sum = mark1 +mark2;
  ave = sum / 2;
  printf("Sum :%d",sum);
  printf("Average : %.2f",ave);

  
  return 0;
}

