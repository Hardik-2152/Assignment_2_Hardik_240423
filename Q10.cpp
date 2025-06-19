#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    vector<string> suffixes;
    for (int i = 0; i < s.size(); ++i) {
        suffixes.push_back(s.substr(i));
    }

    sort(suffixes.begin(), suffixes.end());
    cout << suffixes[k - 1] << endl;
    return 0;
}
