#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;

	std::vector<int> v;

	while (n != 0) {
		if (n % 2 == 0)
			v.push_back(0);
		else
			v.push_back(1);

		n /= 2;
	}

	bool left_zeros = false;
	std::reverse(v.begin(), v.end());
	for (int b : v) {
		if (b == 1) left_zeros = true;
		if (!left_zeros) continue;		
		std::cout << b;
	}
	return 0;
}
