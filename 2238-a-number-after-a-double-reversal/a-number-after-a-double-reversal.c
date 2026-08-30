bool isSameAfterReversals(int num) {
    int temp, digit;
    int reverse1 = 0;
    int reverse2 = 0;
    int original = num;
    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        reverse1 = reverse1 * 10 + digit;
        temp = temp / 10;
    }

    temp = reverse1;

    while (temp > 0) {
        digit = temp % 10;
        reverse2 = reverse2 * 10 + digit;
        temp = temp / 10;
    }

    return reverse2 == original;
}