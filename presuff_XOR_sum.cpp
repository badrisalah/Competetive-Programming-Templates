#include <vector>

struct PrefSufXOR {
    std::vector<int> pref;
    std::vector<int> suf;
};

PrefSufXOR prefixAndSuffixXOR(const std::vector<int>& v) {
    int n = v.size();
    PrefSufXOR res;
    res.pref.resize(n);
    res.suf.resize(n);
    if (n == 0) return res;
    res.pref[0] = v[0];
    for (int i = 1; i < n; i++)
        res.pref[i] = res.pref[i - 1] ^ v[i];
    res.suf[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
        res.suf[i] = res.suf[i + 1] ^ v[i];
    return res;
}

