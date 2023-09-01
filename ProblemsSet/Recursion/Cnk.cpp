#include <bits/stdc++.h>

using namespace std;

int cnk(int n, int nMk, int k) {
    // Base Case
    if(n <= 0)
        return 1;
    if((nMk == 1 || nMk == 0) && (k > 1))
        return (n / (nMk * k)) * cnk(n-1, nMk, k-1);
    else if((k == 1 || k == 0) && (nMk > 1))
        return (n / (nMk * k)) * cnk(n-1, nMk-1, k);
    else if((k == 1 || k == 0) && (nMk == 1 || nMk == 0))
        return (n / (nMk * k)) * cnk(n-1, nMk, k);
    return (n / (nMk * k))* cnk(n-1, nMk-1, k-1);
}

int main()
{
    int n, k; cin >> n >> k;
    cout << cnk(n, n-k, k);
    return 0;
}
