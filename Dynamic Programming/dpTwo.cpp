#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> arr;

bool valid(int r, int c) {
    if(r == arr.size() || c == arr.at(0).size())
        return 0;
    return 1;
}
// Brute Force
int findBiggest(int r, int c) {
    if(!valid(r, c))
        return 0;
    if(r == arr.size()-1 && c == arr.at(0).size()-1)
        return arr.at(r).at(c);
    int path1 = findBiggest(r, c + 1);
    int path2 = findBiggest(r+1, c);
    return arr.at(r).at(c) + max(path1, path2);
}
// Dynamic Programming
vector<vector<int>> visited;
int dpFindBiggest(int r, int c) {
    if(!valid(r, c))
        return 0;
    if(r == arr.size()-1 && c == arr.at(0).size()-1)
        return arr.at(r).at(c);
    if(visited.at(r).at(c) != -1)
        return visited.at(r).at(c);
    int path1 = dpFindBiggest(r, c + 1);
    int path2 = dpFindBiggest(r + 1, c);
    return visited.at(r).at(c) = arr.at(r).at(c) + max(path1, path2);
}
int main()
{
    /*
    1 5 8
    2 4 6
    */
    visited = {
        {-1, -1},
        {-1, -1},
    };
    arr = {
        {1, 5},
        {2, 4},
    };
    cout << findBiggest(0, 0) << "\n";
    cout << dpFindBiggest(0, 0) << "\n";
    return 0;
}
