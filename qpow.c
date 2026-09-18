long long qpow(long long n, long long k, long long M) {
	n = (n % M + M) % M;
	long long ans = 1;
	while (k != 0) {
		if (k & 1)ans = n * ans % M;
		k >>= 1;
		n = n * n % M;
	}
	return ans;
}
