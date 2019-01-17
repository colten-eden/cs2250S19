#include<stdio.h>

int main()
{
	//Task: Define two integers
	int x = 0;
	int y = 0;

	//Display their values
	printf("Please enter an integer value\n");
	//To capture user input use the scanf() function
	//Use same placeholders as printf: %d for intergers
	//But remember to use the Address operator before the 
	//variable name, &x
	scanf("%d", &x);
	printf("The value of x is = %d\n" , x);

	printf("Please enter another integer value\n");
	scanf("%d", &y);
	printf("The value of y is = %d\n", y);

	//Display the sum of them
	printf("The sum of %d + %d is = %d\n", x, y, x+y);

	return 0;
}
