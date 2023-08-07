#include <iostream>

using namespace std;
// Where T Is The Datatype
// You Can Use Class Instead Of typename
// 
template<typename T>
void Swap(T &val1, T &val2) {
    T temp = val1;
    val1 = val2;
    val2 = temp;
}

int main() {
    // You Can Call It For Int
    int a = 0, b = 1;
    cout << a << "-" << b << "\n";
    Swap(a, b);
    cout << a << "-" << b << "\n";
    // OR
    char v = 'v', e = 'e';
    cout << v << "-" << e << "\n";
    Swap<char>(v, e);
    cout << v << "-" << e << "\n";
    return 0;
}
//----------------------*
// Same Code But        |
// Different Data Types |
//----------------------*

