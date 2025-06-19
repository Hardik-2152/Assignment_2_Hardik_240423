
#include <iostream>
#include <vector>
using namespace std;

int lowerBound(const vector<int>& A, int target) {
    int low = 0, high = A.size();
    while (low < high) {
        int mid = (low + high) / 2;
        if (A[mid] < target) low = mid + 1;
        else high = mid;
    }
    return low;
}

int upperBound(const vector<int>& A, int target) {
    int low = 0, high = A.size();
    while (low < high) {
        int mid = (low + high) / 2;
        if (A[mid] <= target) low = mid + 1;
        else high = mid;
    }
    return low;
}

int main() {
    int n, target;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i) cin >> A[i];

    cin >> target;

    int count = upperBound(A, target) - lowerBound(A, target);
    cout << count << endl;

    return 0;
}
