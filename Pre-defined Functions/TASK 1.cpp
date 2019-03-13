//Write a function to compute logba :
#include <stdio.h>
#include <math.h>

double log_any_base (double a, double b){
	return log(a)/log(b);
}

int main(){
//	double a=5,b=2;
	double a,b;
	printf("Enter 1st log : ");
	scanf("%lf", &a);
	printf("Enter 2nd log : ");
	scanf("%lf", &b);
	printf("Log1 / Log2 = %.2lf", log_any_base (a,b));
	return 0;
}
