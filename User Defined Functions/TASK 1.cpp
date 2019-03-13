//Write a void function that takes day, month and year in integers, and generate the output as follow :
//input : 1 3 17
//Output : 01/03/2017

#include <stdio.h>
void print_date(int mo, int day, int year)
{
	/*output formatted date */
	printf("%02i/%02i/20%i\n", mo, day, year );
}

int main(){
//	print_date (25, 12, 17);
	int mo, day, year;
	printf("Enter Date (month day year) : ");
	scanf("%i %i %i", &mo, &day, &year);
	print_date (mo, day, year);
	return 0;
}
