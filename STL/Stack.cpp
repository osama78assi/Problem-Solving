#include<bits/stdc++.h>
using namespace std;

int main()
{

    cout << "\t--> [Stack] <--\n";
    stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << "Top Of The Stack Is: " << myStack.top() << "\n";
    cout << "\t [Traversal]\n";
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << "\n";
    myStack.push(3);
    myStack.push(2);
    myStack.push(1);
    cout << "\t [Reverse Traversal]\n";
    while(!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop();
    }
}
