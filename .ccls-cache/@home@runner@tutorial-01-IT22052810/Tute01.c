/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float m1,m2;//variables
	float sum;
	
	printf("Input marks :");
	scanf("%f%f", &m1, &m2);//input marks of two subjects
	
	sum = m1+m2;//calculation
	printf("Average is %.2f",sum/2);//print the average of two subjects
  return 0;
}

