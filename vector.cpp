#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1️⃣ Declare a vector
    vector<int> v;

    // 2️⃣ push_back() → add elements dynamically
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3️⃣ size() → number of elements
    cout << "Size: " << v.size() << endl;

    // 4️⃣ capacity() → allocated memory
    cout << "Capacity: " << v.capacity() << endl;

    // 5️⃣ Print vector elements using index
    cout << "Elements using index: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 6️⃣ front() and back()
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // 7️⃣ at() → safe access
    cout << "Element at index 1 (using at): " << v.at(1) << endl;

    // 8️⃣ pop_back() → remove last element
    v.pop_back();
    cout << "After pop_back, elements: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 9️⃣ insert() → insert at specific position
    v.insert(v.begin() + 1, 100);
    cout << "After insert at index 1: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 🔟 erase() → remove element
    v.erase(v.begin());
    cout << "After erase first element: ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 1️⃣1️⃣ resize()
    v.resize(5);
    cout << "After resize(5): ";
    for (auto x : v) cout << x << " ";
    cout << endl;

    // 1️⃣2️⃣ reserve() → pre-allocate memory
    v.reserve(20);
    cout << "Capacity after reserve(20): " << v.capacity() << endl;

    // 1️⃣3️⃣ empty()
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 1️⃣4️⃣ clear()
    v.clear();
    cout << "After clear(), size: " << v.size() << endl;

    // 1️⃣5️⃣ empty() after clear
    cout << "Is vector empty now? " << (v.empty() ? "Yes" : "No") << endl;

    return 0;
}
