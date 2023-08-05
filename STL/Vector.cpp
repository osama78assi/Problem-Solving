#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\t--> [Vector] <--\n";
    vector<int> myVector(5, 10);
    cout << "\t [Traversal]\n";
    for(int a : myVector) {
        cout << a << " "; // 10 10 10 10 10
    }
    cout << "\n";
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << "\t [Copy Array In Vector]\n";
    vector<int>myVector1(arr, arr + 6);
    for(auto index : myVector1) {
        cout << index << " ";
    }
    cout << "\n";
    cout << "Third Element In The Vector Before Deleting: " << myVector1.at(2) << "\n";
    myVector1.erase( myVector1.begin() + 2);
    cout << "Third Element In The Vector After Deleting: " << myVector1.at(2) << "\n";
    myVector1.insert(myVector1.begin() + 2, 3);
    cout << "Third Element In The Vector After Adding In The Specific: " << myVector1.at(2) << "\n";
    cout << "Deleting From Index Two To The Index Four: \n";
    myVector1.erase(myVector1.begin() + 1, myVector1.begin() + 5);
    vector<int>::iterator vectorIt = myVector1.begin();
    while(vectorIt != myVector1.end()) {
        cout << *vectorIt << " ";
        ++vectorIt;
    }
    cout << "\n###########\n";
}
