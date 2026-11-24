
int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int maxLength(int* nums, int numsSize) {
    int ans = 0;

    for (int i = 0; i < numsSize; i++) {
        long long p = 1;
        int g = nums[i], l = nums[i];

        for (int j = i; j < numsSize; j++) {
            p *= nums[j];

            if (p > 25200) break;

            g = gcd(g, nums[j]);
            l = lcm(l, nums[j]);

            if (p == (long long)g * l)
                ans = (j - i + 1 > ans) ? j - i + 1 : ans;
        }
    }

    return ans;
}
