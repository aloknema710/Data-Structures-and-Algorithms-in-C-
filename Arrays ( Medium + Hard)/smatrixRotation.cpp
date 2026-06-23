#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0;i < matrix.size();i++){
            for(int j = i+1;j < matrix.size();j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        for(int i = 0;i < matrix.size();i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }
};

// transpose 1 time and reverse every row
int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution s;

    s.rotate(matrix);
    for(const auto& row: matrix){
        for(int x : row)cout<<x<<" ";
        cout<<endl;
    }
}