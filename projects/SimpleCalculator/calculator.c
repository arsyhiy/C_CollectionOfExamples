// get from  https://www.geeksforgeeks.org/c-program-to-make-a-simple-calculator/

// calculator with switch-case statements
#include <stdio.h>
#include <float.h>

int main(){
  char op;
  double a, b, res;

  // Read the operator
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);

  // Read the two numbers
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  // Define all four operations in the corresponding
  // switch-case 
  switch (op) {
    case '+':
      res = a + b;
      break;
    case '-':
      res = a - b;
      break;
    case '*':
      res = a * b;
      break;
    case '/':
      res = a / b;
      break; 
    default:
      printf("Error! Incorect operator value\n");
      res = -DBL_MAX;
  }
  if(res!=-DBL_MAX)
    printf("%.2lf", res);

  return 0;
}
