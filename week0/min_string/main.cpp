#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> split(std::string, std::string);

int main() {
	std::string words;

	std::getline(std::cin, words);

	std::vector<std::string> v = split(words, " ");
	std::string min = v[0];
	
	for (auto s : v) {
		if (s < min)
			min = s;
	}

	std::cout << min;

	return 0;	
}

std::vector<std::string> split(std::string s, std::string delimeter) {
	int pos_start = 0;
	int pos_end;
	int delim_len = delimeter.length();
	std::string token;

	std::vector<std::string> res;

	while ((pos_end = s.find(delimeter, pos_start)) != std::string::npos) {
		token = s.substr(pos_start, pos_end - pos_start);
		pos_start = pos_end + delim_len;
		res.push_back(token);
	}

	res.push_back(s.substr(pos_start));
	return res;
}
