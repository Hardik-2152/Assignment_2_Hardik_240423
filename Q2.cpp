#include <iostream>
#include <vector>
using namespace std;

int findMin(const vector<int>& A) {
    int low = 0, high = A.size() - 1;
    while (low < high) {
        int mid = (low + high) / 2;
        if (A[mid] > A[high]) low = mid + 1;
        else high = mid;
    }
    return A[low];
}

int main() {
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];

    int result = findMin(A);
    cout << result << endl;

    return 0;
}
