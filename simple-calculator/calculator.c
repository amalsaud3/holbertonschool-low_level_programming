#include <stdio.h>

int main(void)
{
	int choice;
	double a, b, result;

	printf("Simple Calculator\n");

	do {
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				return (1);

			printf("B: ");
			if (scanf("%lf", &b) != 1)
				return (1);

			if (choice == 1)
				result = a + b;
			else if (choice == 2)
				result = a - b;
			else if (choice == 3)
				result = a * b;
			else
			{
				if (b == 0)
				{
					printf("Error: division by zero\n");
					continue;
				}
				result = a / b;
			}

			printf("Result: %g\n", result);
		}

	} while (choice != 0);

	printf("Bye!\n");
	return (0);
}
