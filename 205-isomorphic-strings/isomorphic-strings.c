bool isIsomorphic(char* s, char* t) {
    int a[256] = {0}, b[256] = {0};

    for (int i = 0; s[i]; i++) {
        if (a[(unsigned char)s[i]] != b[(unsigned char)t[i]])
            return false;

        a[(unsigned char)s[i]] = i + 1;
        b[(unsigned char)t[i]] = i + 1;
    }

    return true;
}