#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "drob.h"

#define P 10000

drob::drob(double a) {
	c = a * P;
	z = P;
	sokr();
}

drob::drob(int a, int b) {
	c = a;
	z = b;
	sokr();
}

drob operator+(drob& a, drob& b) {
	return drob(a.c * b.z + b.c * a.z, a.z * b.z);
}

drob operator-(drob& a, drob& b) {
	return drob(a.c * b.z - b.c * a.z, a.z * b.z);
}

drob operator*(drob& a, drob& b) {
	return drob(a.c * b.c, a.z * b.z);
}

void drob::sokr() {
	for (int i = 2; i <= 20; i++) {
		while (c % i == 0 && z % i == 0) {
			c /= i;
			z /= i;
		}
	}
}

void drob::print() {
	printf("%d/%d(%f)", c, z, float(c) / float(z));
}