#include <stdio.h>

int main() {

	char operator = ' ';
	int n1, n2;

	while (operator != 'q') {

		printf("Valid operators: +, -, *, /\n");
		printf("Enter 'q' to end the program\n");
		printf("Choose an operator: ");
		scanf_s("%c", &operator);
		getchar();

		if (operator == 'q') {
			break;
		}

		printf("Enter number 1 > ");
		scanf_s("%d", &n1);

		printf("Enter number 2 > ");
		scanf_s("%d", &n2);

		switch (operator) {
		case '+':
			printf("%d + %d = %d\n", n1, n2, (n1 + n2));
			break;
		case '-':
			printf("%d - %d = %d\n", n1, n2, (n1 - n2));
			break;
		case '*':
			printf("%d * %d = %d\n", n1, n2, (n1 * n2));
			break;
		case '/':
			printf("%d / %d = %d\n", n1, n2, (n1 / n2));
			break;
		default:
			printf("Invalid operator");
			break;
		}
	} 

	return 0;
}