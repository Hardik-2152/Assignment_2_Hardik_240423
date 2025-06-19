
#include<bits/stdc++.h>

using namespace std;

bool isValid(const vector<int>& A, int H, int B) {
    long long wood = 0;
    for (int h : A) {
        if (h > H) wood += (h - H);
    }
    return wood >= B;
}

int main() {
    int n, B;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    cin >> B;

    int low = 0, high = *max_element(A.begin(), A.end());
    int ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isValid(A, mid, B)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}
