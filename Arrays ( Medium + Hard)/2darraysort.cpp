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
    // This line is using a custom comparator with sort() to sort the rows of the 2D array based on column k.
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

/*
3. The lambda function
[k](const vector<int>& a, const vector<int>& b)
{
    return a[k] < b[k];
}

This is a lambda function (anonymous function).

Equivalent named function:

bool compare(const vector<int>& a,
             const vector<int>& b)
{
    return a[k] < b[k]; // won't compile because k is local
}

The lambda solves this by capturing k.
*/