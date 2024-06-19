#include "drob.h"
class drob_satu : public drob {
private:
	void checker();
	bool satu;

	friend drob_satu operator+(drob_satu& a, drob_satu& b);
	friend drob_satu operator-(drob_satu& a, drob_satu& b);
	friend drob_satu operator*(drob_satu& a, drob_satu& b);
public:
	drob_satu(double a = 0.0);
	drob_satu(int a, int b);
	void const print();
};