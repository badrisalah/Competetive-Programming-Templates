void buildFactorials(int n) {
    factorial.assign(n+1, 1);
    for (int i = 1; i <= n; i++)
        factorial[i] = factorial[i-1] * i % mod;
}

