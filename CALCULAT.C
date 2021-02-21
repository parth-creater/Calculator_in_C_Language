#include<stdio.h>
int main()
{
  int num1,num2;
  float result;
  char ch;

  clrscr();

  printf("Enter First Number:");
  scanf("%d", &num1);
  printf("Enter Second Number:");
  scanf("%d", &num2);

  printf("Choose Operation (+ , - , * , /): ");
  scanf("%c", &ch);

  result=0;
  switch(ch)
  {
	case '+':
		result=num1+num2;
		break;

	case '-':
		result=num1-num2;
		break;

	case '*':
		result=num1*num2;
		break;

	case '/':
		result=num1/num2;
		break;

	default:
		printf("Invalid Operator Selected\n");
  }

  printf("Result: %d %c %d = %f\n", num1, ch, num2, result);

  getch();
  return 0;
}
