#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double quadratic_derivative(int a,int b,int c,int x){
	// Returns d/dx (ax^2 + bx + c) = 2ax^2 + b
	return 2*a*x + b;
}

/*
 * Given a quadratic equation ax^2 + bx + c, returns an approximation to one of the roots
*/
double quadratic_equation(int a,int b, int c){
	double x_k = 1000; // Initial guess
	double max_err = 0.0000000001; // The maximum absolute error that the approximation can have.

	while(1){
		double x_k_old = x_k;
		double f_xk = (a*x_k*x_k + b*x_k + c); // f(x_k)
		x_k = x_k - f_xk/quadratic_derivative(a,b,c,x_k);

		printf("x_k: %lf\n", x_k);
		if(fabs(x_k-x_k_old)<=max_err)
			break;
	}
	return x_k;

}

int main(int argc, char** args){
	int a = atoi(args[1]);
	int b = atoi(args[2]);
	int c = atoi(args[3]);
	printf("a = %d, b = %d, c = %d\n",a,b,c);
	
	printf("Result: %lf\n",quadratic_equation(a,b,c));
	return 0;
}

