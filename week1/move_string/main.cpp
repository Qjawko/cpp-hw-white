void MoveStrings(vector<string>& src, vector<string>& dst) {
	for (auto x : src) {
		dst.push_back(x);
	}

	src.clear();
}
