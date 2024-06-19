#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "drob_satu.h"

void drob_satu::checker() {
	satu = false;
	if (c > 9999) {
		satu = true;
		c = 9999;
	}
	if (c < -9999) {
		satu = true;
		c = -9999;
	}
}

drob_satu::drob_satu(double a) : drob(a) {
	checker();
}

drob_satu::drob_satu(int a, int b) : drob(a,b){
	checker();
}

void const drob_satu::print() {
	if (satu) printf("*");
	drob::print();
}


drob_satu operator+(drob_satu& a, drob_satu& b) {
	drob_satu result(a.c * b.z + b.c * a.z, a.z * b.z);
	result.satu = (a.satu || b.satu);
	return result;
}

drob_satu operator-(drob_satu& a, drob_satu& b) {
	drob_satu result(a.c * b.z - b.c * a.z, a.z * b.z);
	result.satu = (a.satu || b.satu);
	return result;
}

drob_satu operator*(drob_satu& a, drob_satu& b) {
	drob_satu result(a.c * b.c, a.z * b.z);
	result.satu = (a.satu || b.satu);
	return result;
}