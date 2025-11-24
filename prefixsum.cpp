std::vector<long long> prefixSum(const std::vector<int>& v) {
    std::vector<long long> pref(v.size());
    if (v.empty()) return pref;

    pref[0] = v[0];
    for (size_t i = 1; i < v.size(); i++)
        pref[i] = pref[i - 1] + v[i];

    return pref;
}

