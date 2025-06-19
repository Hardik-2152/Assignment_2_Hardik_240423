#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];

    multiset<string> ms;
    for (int i = 0; i < n; ++i) {
        int niceness = distance(ms.begin(), ms.lower_bound(A[i]));
        cout << niceness << endl;
        ms.insert(A[i]);
    }

    return 0;
}

