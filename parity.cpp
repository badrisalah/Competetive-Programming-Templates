

void checkparity(int n){
    if(n & 1) cout << "YES\n";
    else cout << "NO\n";
}

int paritycount(const vector<int>& a){
    unordered_map<int,int> f;
    for(int x : a) f[x] ^= 1;
    int r = 0;
    for(auto &p : f) r += p.second;
    return r;
}

