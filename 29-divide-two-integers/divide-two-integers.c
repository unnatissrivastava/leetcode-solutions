int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;

    long long a = llabs((long long)dividend);
    long long b = llabs((long long)divisor);
    long long ans = 0;

    while (a >= b) {
        long long t = b, m = 1;
        while (a >= (t << 1)) {
            t <<= 1;
            m <<= 1;
        }
        a -= t;
        ans += m;
    }

    return ((dividend < 0) ^ (divisor < 0)) ? -ans : ans;
}