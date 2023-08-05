#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\t--> [Pair] <--\n";
    pair<int, string> names(1,"Osama");
    cout << "First Element In The Pair: " << names.first << "\n";
    cout << "Second Element In The Pair: " << names.second << "\n";
    cout << "\n";
    cout << "\t [Pair Of Pair Of Pair]\n";
    pair<int, pair<int, pair<int, int>>>names1 = make_pair(1, make_pair(2, make_pair(3, 4)));
    cout << "First Element In The Pair: " << names1.first << "\n";
    cout << "Second Element In The Pair: " << names1.second.first << "\n";
    cout << "Third Element In The Pair: " << names1.second.second.first << "\n";
    cout << "Forth Element In The Pair: " << names1.second.second.second << "\n";
    cout << "\n###########\n";
}
