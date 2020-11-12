#include <iostream>
#include <cmath>

double get_root(double, double, double);
double get_discriminant(double, double, double);

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	int d = (b * b) - (4 * a * c);
	
	//std::cout << d;
	
	if (d < 0) 
		return 0;
	if (d == 0) {
		double r = get_root(a, b, 0);
		if (std::isfinite(r) && a != 0)
			std::cout << r;
		return 0;
	}

	if (a == 0) {
		std::cout << -c/double(b);
		return 0;
	}
		
	double fr = get_root(a, b, sqrt(d));
       	double sr = get_root(a, b, -sqrt(d));

	if (std::isfinite(fr) && a != 0) 
		std::cout << fr;
	if (std::isfinite(sr) && a != 0) {
		std::cout << ' ';
		std::cout << sr;
	}
}

double get_root(double a, double b, double d) {
	return (-b + d) / (2 * a);
}

double get_discriminant(double a, double b, int c) {
	return (b * b) - (4 * a * c);
}
