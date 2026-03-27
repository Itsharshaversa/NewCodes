#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    queue<int> q;

    int x;

    // Input + store in both vector and queue
    for(int i = 0; i < n; i++) {
        cin >> x;
        vec[i] = x;
        q.push(x);
    }

    // ---- Approach 1: Vector ----
    int sum1 = 0;
    for(int val : vec) {
        sum1 += val;
    }

    // ---- Approach 2: Queue ----
    int sum2 = 0;
    while(!q.empty()) {
        sum2 += q.front();
        q.pop();
    }

    // Output (both same)
    cout << sum1;   // or sum2

    return 0;
}