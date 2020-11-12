#include <iostream>
#include <cmath>

int gcd(int, int);

int main() {
	int a, b;
	std::cin >> a >> b;

	std::cout << gcd(std::abs(a), std::abs(b));
	return 0;
}

//Euclidean algorithm
int gcd(int a, int b) {
	while(a != 0 && b != 0) {
		if (a > b) 
			a = a % b;
		else
			b = b % a;	
	}

	return a+b;
}
