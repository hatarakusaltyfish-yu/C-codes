long long iniv(long long a, long long M) {
	long long iniv_qpow(long long n, long long k) {
		n = (n % M + M) % M;
		long long ans = 1;
		while (k != 0) {
			if (k & 1)ans = n * ans % M;
			k >>= 1;
			n = n * n % M;
		}
		return ans;
	}
	a = (a % M + M) % M;
	return iniv_qpow(a, M - 2);
}
