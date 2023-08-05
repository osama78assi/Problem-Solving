#include<bits/stdc++.h>
using namespace std;

int main()
{

    // Normal Queue
    cout << "\t--> [Queue] <--\n";
    queue<int> myQueue;
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    cout << "First Element: " << myQueue.front() << "\n";
    cout << "Last Element: " << myQueue.back() << "\n";
    cout << "\t [Traversal]\n";
    while(!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << "\n###########\n";
    cout << "\t--> [Deque] <--\n";
    // Circular Queue
    deque<int> myDeque;
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    cout << "First Element: "<< myDeque.front() << "\n";
    cout << "Last Element: " << myDeque.back() << "\n";
    cout << "\t [Traversal From Front With Adding In Back]\n";
    while(! myDeque.empty()) {
        cout << myDeque.front() << " ";
        myDeque.pop_front();
    }
    cout << "\n";
    myDeque.push_front(1);
    myDeque.push_front(2);
    myDeque.push_front(3);
    cout << "\t [Traversal From Front With Adding In Front]\n";
    while(! myDeque.empty()) {
        cout << myDeque.back() << " ";
        myDeque.pop_back();
    }
    cout << "\n";
    myDeque.push_back(1);
    myDeque.push_back(2);
    myDeque.push_back(3);
    cout << "\t [Traversal From Back With Adding In Back]\n";
    while(! myDeque.empty()) {
        cout << myDeque.back() << " ";
        myDeque.pop_back();
    }
    cout << "\n";
    myDeque.push_front(1);
    myDeque.push_front(2);
    myDeque.push_front(3);
    cout << "\t [Traversal From Back With Adding In Front]\n";
    while(myDeque.size() != 0) {
        cout << myDeque.front() << " ";
        myDeque.pop_front();
    }
    cout << "\n###########\n";
    cout << "\t--> [Priority Queue] <--\n";
    priority_queue<int> myPriorityQueue;
    myPriorityQueue.push(3);
    myPriorityQueue.push(2);
    myPriorityQueue.push(1);
    cout << "\t [Traversal]\n";
    while(!myPriorityQueue.empty()) {
        cout << myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    cout << "\n";
    myPriorityQueue.push(-3);
    myPriorityQueue.push(-2);
    myPriorityQueue.push(-1);
    cout << "\t [Reverse Traversal]\n";
        while(!myPriorityQueue.empty()) {
        cout << -myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    cout << "\n###########\n";
}
