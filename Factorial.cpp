// Given an integer n, return the number of trailing zeroes in n!.

int solution() {
	int trailingZeroes(int n) {
		long long i = 5;
		int count = 0;
		while (n / i >= 1) {
			count += n / i;
			i = i * 5;
		}
