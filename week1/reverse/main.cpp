void swap(int& a, int& b) {
	auto tmp = a;
	a = b;
	b = tmp;
}

void Reverse(vector<int>& xs) {
	for (int i = 0; i < xs.size()/2; ++i) {
		swap(xs[i], xs[xs.size() - i - 1]);
	}
}
