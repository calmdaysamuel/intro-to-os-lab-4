#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int _exit (int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int a = 6;
  int b = 3;
  int input = 0;
  int (*func[])(int a, int b) = {add, subtract, multiply, divide, _exit};
  while(1) {
    printf("Operand a: %d, Operand b: %d\n", a, b);
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
    scanf("%d", &input);
    printf("Output: %d\n", func[input](a,b));
  }
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' and 'b'\n"); return a / b; }
int _exit (int a, int b) { printf ("Exiting \n"); exit(0); }