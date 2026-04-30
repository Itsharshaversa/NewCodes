#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {-2,3,4,-5,6,7,-1,-2,-2,-5};
    int k = 2;

    for (int i = 0; i <= vec.size() - k; i++) {
        cout << "(" << i << "," << i+1 << ") : ";

        for (int j = i; j < i + k; j++) {
            cout << vec[j] << " ";
        }

        cout << endl;
    }

    return 0;
}