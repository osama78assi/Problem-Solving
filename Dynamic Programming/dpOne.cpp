#include <bits/stdc++.h>

using namespace std;
int const MAX = 1e4;
int arr1[MAX];
// Ad-hoc
int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}
// Dynamic Programming => Memoization => Top-Bottom
int fib1(int n) {
    if(n <= 1)
        return n;
    if(arr1[n] != 0)
        return arr1[n];
    return arr1[n] = fib1(n-1) + fib1(n-2);
}
// Dynamic Programming => Table => Bottom-Up
int fib2(int n) {
    int arr2[MAX];
    arr2[0] = 0;
    arr2[1] = 1;
    for(int i = 2; i<=n; i++) {
        arr2[i] = arr2[i-1] + arr2[i - 2];
    }
    return arr2[n];
}
int main()
{
    cout << fib1(40) << "\n";
    cout << fib2(40) << "\n";
    cout << fib(40) << "\n";
    return 0;
}
