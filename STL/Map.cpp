#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\t--> [Map] <--\n";
    map<string, int> myMap = {{"osama", 100}, {"rozi", 99}, {"raian", 60}};
    cout << "First Element In The Map: " << myMap["osama"] << "\n";
    cout << "\t [Traversal]\n";
    for(pair<string, int> index : myMap) {
        cout << "[" << index.first << "]" << ":" << index.second << "\n";
    }
    cout << "Adding A Value [saeed] : 55\n";
    myMap["saeed"] = 55;
    cout << "\t [Traversal Again]\n";
    for(auto index : myMap) {
        cout << "[" << index.first << "]" << ":" << index.second << "\n";
    }
    cout << "\n###########\n";
