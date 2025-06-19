#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
        freq[heights[i]]++;
    }

    int maxDiff = -1;
    for (auto& [h1, f1] : freq) {
        for (auto& [h2, f2] : freq) {
            if (h1 > h2) {
                int diff = abs(f1 - f2);
                maxDiff = max(maxDiff, diff);
            }
        }
    }

    cout << maxDiff << endl;
    return 0;
}
