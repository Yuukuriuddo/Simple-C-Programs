#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846
using namespace std;

class Figura {
	public:
		virtual float pole() = 0;
};
class Prostokat : public Figura {
	private:
		int a;
		int b;
	public:
	float pole() {
		return a * b;
	}
	Prostokat(int a, int b);
};
class Kolo : public Figura {
	private:
		int r;
	public:
	float pole() {
		return M_PI * r * r;
		
	}
	Kolo(int r);
};
class Kwadrat : public Figura {
	private:
		int a;
	public:
	float pole() {
		return a * a;
	}
	Kwadrat(int a);
};
class Trapez : public Figura {
	private:
		int a;
		int h;
	public:
	float pole() {
		return a * h / 2;
	}
	Trapez(int a, int h);
};

Prostokat::Prostokat(int _a, int _b) {
	a = _a;
	b = _b;
}

Kolo::Kolo(int _r) {
	r = _r;
}

Kwadrat::Kwadrat(int _a) {
	a = _a;
}

Trapez::Trapez(int _a, int _h) {
	a = _a;
	h = _h;
}

int main()
{
	double suma = 0;

	Figura* figura[4];
	figura[0] = new Prostokat(9, 3);
	figura[1] = new Kwadrat(20);
	figura[2] = new Kolo(14);
	figura[3] = new Trapez(70, 3);

	for (int i = 0; i < 4; i++) {
		suma += figura[i]-> pole();
	}

	cout << "Suma pol: " << suma << endl;
}