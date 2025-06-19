#include <iostream>
#include <vector>
using namespace std;

int searchMatrix(const vector<vector<int>>& A, int B) {
    int n = A.size(), m = A[0].size();
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int val = A[mid / m][mid % m];
        if (val == B) return 1;
        else if (val < B) low = mid + 1;
        else high = mid - 1;
    }
    return 0;
}

int main() {
    int n, m, B;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];
    cin >> B;

    cout << searchMatrix(A, B) << endl;
    return 0;
}
