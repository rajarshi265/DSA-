#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;
    m[1] = "Apple";
    m[3] = "Cherry";
    m[2] = "Banana";

    cout << "Map contents:\n";
    for (auto it : m)
        cout << it.first << " -> " << it.second << endl;

    cout << "Size: " << m.size() << endl;
    
    m.erase(2);
    cout << "After erasing key 2:\n";
    for (auto it : m)
        cout << it.first << " -> " << it.second << endl;

    return 0;
}