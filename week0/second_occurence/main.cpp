#include <iostream>
#include <string>

int main() {
	std::string s;
	std::cin >> s;

	int count = 0;
	int second_index = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] == 'f') {
			if (count == 1) 
				second_index = i;
			++count;
		}
	}

	if (count == 1 || count == 0) {
		std::cout << -2 + count;
		return 0;
	}

	std::cout << second_index;
	return 0;
}
