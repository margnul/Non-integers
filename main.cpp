#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "drob_satu.h"

int main() {
	double num1, num2;
	num1 = 10000.0;
	num2 = 1234;

	drob_satu d1(num1);
	drob_satu d2(num2);
	drob_satu d3(0);

	// sum
	d3 = d1 + d2;
	d1.print();
	printf(" + ");
	d2.print();
	printf(" = ");
	d3.print();
	printf("\n");


	// diff
	d3 = d1 - d2;
	d1.print();
	printf(" - ");
	d2.print();
	printf(" = ");
	d3.print();
	printf("\n");


	// mult
	d3 = d1 * d2;
	d1.print();
	printf(" * ");
	d2.print();
	printf(" = ");
	d3.print();
	printf("\n");


	return 0;
}