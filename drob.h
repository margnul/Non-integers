class drob {
protected:
	int c;
	int z;
public:

	drob(double a = 0.0);
	drob(int a, int b);

	friend drob operator+(drob& a, drob& b);
	friend drob operator-(drob& a, drob& b);
	friend drob operator*(drob& a, drob& b);

	void sokr();
	void print();
};
