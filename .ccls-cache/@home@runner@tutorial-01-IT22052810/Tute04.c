/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int num1,int num2);//functions
int maximum(int num1,int num2);
int multiply(int num1,int num2);
int main()
{
	int no1,no2;//variables
	printf("Enter valur for no1 :;");
	scanf("%d", &no1);//Enter value for no 1
	printf("Enter valur for no2 :;");
	scanf("%d", &no2);//Enter value for no 2
	printf("mimimum is %d ", minimum(no1,no2));//print minimum
	printf("\nmaximum %d ", maximum(no1,no2));//print maximum
	printf("\nmultiply %d ", multiply(no1,no2));//print multiply
	return 0;
	
}
int minimum(int num1,int num2)//functions
{
	int minimum;
	if(num1 > num2)//selection
	{
		return minimum = num2;//return the function
	}
	else//selection
	{
		return minimum = num1;//return the function
	}
}
int maximum(int num1,int num2)
{
	int maximum;
	if(num1 > num2)//selection
	{
		return maximum = num1;//return the function
	}
	else//selection
	{
		return maximum = num2;//return the function
	}
}
int multiply(int num1,int num2)
{
	int multiply;
	return multiply = num1 * num2;//calcution and return the function
}
