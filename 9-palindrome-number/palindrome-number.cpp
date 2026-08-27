class Solution {
public:
    bool isPalindrome(int x) {
        if (x <0)
            return false;
        int digit, temp;
        long rev=0;
        temp = x;
        while(temp != 0){
            digit = temp%10;
            rev = rev * 10 + digit;
            temp /= 10;

        }
        if (rev == x)

        return true;
        else
        return false;
        
    }
};