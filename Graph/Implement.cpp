#include<bits/stdc++.h>
using namespace std;

void print(int graph[][10], int nodes) {
    int i, j;
    cout << "\n\n" << setw(4) << " ";
    for(i = 0; i < nodes; i++)
        cout << setw(3) << "(" << i+1 << ")";
    cout << "\n\n";
    for(i = 0; i < nodes; i++) {
        cout << setw(3) << "(" << i+1 << ")";
        for(j = 0; j < nodes; j++) {
            cout << setw(4) << graph[i][j];
        }
        cout << "\n\n";
    }
}

int main() {
    int i, j, v;
    cout << "Enter How Many Vertexes: ";
    cin >> v;
    int graph[10][10];
    cout << "\n";
    // Take Input Of Adjacency Of Each Pair Of Vertexes
    for(i = 0; i < v; i++) {
        for(j = i; j < v; j++) {
            // This Condition Just If There No Loop
            if(i!=j) {
                cout << "Enter 1 If Vertex " << i+1 << " Is Adjacent To " << j+1 << " , Otherwise 0: ";
                cin >> graph[i][j];
                // This Line Just For Undirected Graph
                graph[j][i] = graph[i][j];
            }
            else
                graph[i][j] = 0;
        }
    }
    print(graph, v);
    return 0;
}
