int Factorial(int n) {
	if (n < 0)
		return 1;

	int f = 1;
	for (int i = 2; i <= n; ++i)
	{
		f *= i;
	}

	return f;
}