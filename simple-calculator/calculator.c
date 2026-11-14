#include <stdio.h>

int main(void)
{
	int choice, a, b, result;

	printf("Simple Calculator\n");
	do {
		printf("1) Add\n2) Subtract\n3) Multiply\n4) Divide\n0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice == 1)
		{
			printf("A: ");
			if (scanf("%d", &a) != 1)
				return (1);
			printf("B: ");
			if (scanf("%d", &b) != 1)
				return (1);
			result = a + b;
			printf("Result: %d\n", result);
		}
	} while (choice != 0);

	printf("Bye!\n");
	return (0);
}
