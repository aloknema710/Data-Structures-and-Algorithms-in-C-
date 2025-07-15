#include<bits/stdc++.h>
using namespace std;
vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> pascalfulltrianglr(int n){
    vector<vector<int>> res(n);
    for(int row = 1;row <= n; row++){
        res.push_back(generateRow(row));
    }
    return res;
}
int main(){
    int n = 18; // row number
    // int c = 3; // col number
    // int element = pascalTriangle(n);
    // cout << "The element at position (r,c) is: "<< element <<"n";
    // printrow(r);
    vector<vector<int>> result = pascalfulltrianglr(n);
    for (auto it : result) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << endl ;
    }
    return 0;
}

/*
//Naive approach
int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return (int)(res);
}

vector<vector<int>> pascalTriangle(int n) {
    vector<vector<int>> ans;

    //Store the entire pascal's triangle:
    for (int row = 1; row <= n; row++) {
        vector<int> tempLst; // temporary list
        for (int col = 1; col <= row; col++) {
            tempLst.push_back(nCr(row - 1, col - 1));
        }
        ans.push_back(tempLst);
    }
    return ans;
}
*/