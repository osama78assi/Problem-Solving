#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\t--> [Set] <--\n";
    set<int> mySet = {4, 3, 2, 1};
    cout << "\t [Traversal]\n";
    set<int>::iterator setIt = mySet.begin();
    while(setIt != mySet.end()) {
        cout << *setIt << " ";
        ++setIt;
    }
    cout << "\n###########\n";
    cout << "\t--> [Multi Set] <--\n";
    multiset<int> myMultiSet = {1, 1, 2, 2, 3, 3, 4, 4};
    for(auto index : myMultiSet) {
        cout << index << " ";
    }
}
