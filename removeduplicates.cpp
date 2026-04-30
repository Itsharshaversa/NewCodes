// i have a aray i have to remove the duplicates from the array and print the unique elements in the array
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {-2,3,4,-5,6,7,-1,-2,-2,-5};
    set<int> uniqueElements;

    for (int num : vec) {
        uniqueElements.insert(num);
    }

    cout << "Unique elements in the array: ";
    for (int num : uniqueElements) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
// now i want to put elements in a map
#include <bits/stdc++.h>
using namespace std;

    int main() {
        vector<int> vec = {-2,3,4,-5,6,7,-1,-2,-2,-5};
        map<int, int> elementCount;

        for (int num : vec) {
            elementCount[num]++;
        }

        cout << "Element counts in the array: " << endl;
        
        for (const auto& pair : elementCount) {
            cout << pair.first << ": " << pair.second << endl;
        }

        return 0;
    }


#include <bits/stdc++.h>
using namespace std;    

int main() {
    vector<int> vec = {-2,3,4,-5,6,7,-1,-2,-2,-5};
    map<int, int> elementCount;

    for (int num : vec) {
        elementCount[num]++;
    }

    cout << "Element counts in the array: " << endl;
    
    for (auto it = elementCount.begin(); it != elementCount.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
