int maxProduct(int n) {
    int digit;
    int largest = 0;
    int secondLargest = 0;

    while (n > 0) {
        digit = n % 10;
        n = n / 10;

        if (digit > largest) {
            secondLargest = largest;
            largest = digit;
        }
        else if (digit > secondLargest) {
            secondLargest = digit;
        }
    }

    return largest * secondLargest;
}