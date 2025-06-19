#include <iostream>
#include <vector>
using namespace std;

int searchInsert(const vector<int>& A, int target) {
    int low = 0, high = A.size() - 1, ans = A.size();
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, target;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];
    cin >> target;

    cout << searchInsert(A, target) << endl;
    return 0;
}
