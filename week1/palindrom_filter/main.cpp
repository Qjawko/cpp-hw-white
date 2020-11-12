#include <string>
#include <vector>
#include <iostream>

bool IsPalindrom(std::string s) {
	for (int i = 0; i < s.size() / 2; ++i) {
		if (s[i] != s[s.size() - i - 1])
			return false;
	}

	return true;
}

std::vector<std::string> PalindromFilter(std::vector<std::string> xs, int min) {
	std::vector<std::string> res;
        for (int i = 0; i < xs.size(); ++i) {
		if (IsPalindrom(xs[i]) && xs[i].size() >= min)
			res.push_back(xs[i]);
	}

	return res;
}

//int main() {
//	std::vector<std::string> xs;
//	xs.push_back("water");
//	xs.push_back("weew");
//	xs.push_back("wow");
//
//	std::vector<std::string> filtered = PalindromFilter(xs, 4);
//
//	for (auto x : filtered) {
//		std::cout << x;
//	}
//}
