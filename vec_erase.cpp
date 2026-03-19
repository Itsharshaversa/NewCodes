#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Random vector with duplicates
    vector<int> vec = {5,2,8,2,9,1,5,3,8,7,3};

    cout << "Original Vector:\n";
    for(int x : vec) cout << x << " ";
    cout << "\n\n";

    // STEP 1: Sort the vector
    // This brings duplicate values together
    sort(vec.begin(), vec.end());

    cout << "After sorting:\n";
    for(int x : vec) cout << x << " ";
    cout << "\n\n";

    // STEP 2: unique() shifts unique elements to the front
    // and returns iterator to the new logical end
    auto it = unique(vec.begin(), vec.end());

    cout << "After unique() (duplicates moved to end):\n";
    for(int x : vec) cout << x << " ";
    cout << "\n";

    cout << "Index of new logical end: "
         << distance(vec.begin(), it) << "\n\n";

    // STEP 3: erase the unwanted tail
    vec.erase(it, vec.end());

    cout << "Final vector after erase():\n";
    for(int x : vec) cout << x << " ";
    cout << "\n";

    return 0;
}