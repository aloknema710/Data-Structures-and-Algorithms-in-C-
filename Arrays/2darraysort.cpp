// sorting spreadsheet kind of data based on columns

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int k;
    cin >> k;

    sort(arr.begin(), arr.end(), [k](const vector<int>& a, const vector<int>& b) {
        return a[k] < b[k];
    });

    for (const auto& row : arr) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << "\n";
    }

    return 0;
}