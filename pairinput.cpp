#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    pair<int,int> p;
    cin >> p.first >> p.second;

    // Direct update (BEST)
    vec[p.first] = p.second;

    for(int k : vec) {
        cout << k << " ";
    }

    return 0;
}