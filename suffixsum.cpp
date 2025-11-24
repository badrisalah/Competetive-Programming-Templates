std::vector<long long> suffixSum(const std::vector<int>& v) {
    std::vector<long long> suf(v.size());
    if (v.empty()) return suf;

    suf.back() = v.back();
    for (int i = v.size() - 2; i >= 0; i--)
        suf[i] = suf[i + 1] + v[i];

    return suf;
}

