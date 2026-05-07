#include<bits/stdc++.h>
using namespace std;

class Solution{
private:
    /* data */
    bool isPrime(int n){
        if(n < 2) return false;
        for (int i = 2; i*i <= n; i++){
            if(n%i == 0) return false;
        }
        return true;
    }
    // vector<int> findprimefactors(int n){
    //     vector<int> factors;
    //     int temp = n;
    //     for (int i = 2; i*i <= n; i++){
    //             while(temp!=0){
    //             if(temp%i == 0) {
    //                 if(isPrime(i)) factors.push_back(i);
    //                 if(temp/i != i && isPrime(temp/i)) factors.push_back(temp/i);
    //                 }
    //             temp = temp/i;
    //             }
    //         }
    //         if(factors.empty() && isPrime(n)) {
    //         factors.push_back(n);
    //     }

    //     return factors;
    // }
    
    vector<int> findPrimeFactors(int n) {
        vector<int> factors;
    
        for (int i = 2; i * i <= n; i++) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }
    
        if (n > 1) {
            factors.push_back(n);
        }
    
        return factors;
    }
public:
    vector<vector<int>> primefactors(vector<int> &queries){
        vector<vector<int>> ans;
        for (int i = 0; i < queries.size(); i++){
            ans.push_back(findPrimeFactors(queries[i]));
        }
        return ans;
    }
};

int main(){
    vector<int> queries = {22,36,45,69,82,120};
    Solution s;

    vector<vector<int>> ans = s.primefactors(queries);

    for(auto &vec : ans){
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }
}



/*
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> primefactors(vector<int> &queries){
        vector<vector<int>> ans;

        for(int n : queries){
            vector<int> factors;

            for(int i = 2; i*i <= n; i++){
                while(n % i == 0){
                    factors.push_back(i);
                    n /= i;
                }
            }

            // if remainder is prime
            if(n > 1) factors.push_back(n);

            ans.push_back(factors);
        }

        return ans;
    }
};

int main(){
    vector<int> queries = {15, 20};
    Solution s;

    vector<vector<int>> ans = s.primefactors(queries);

    for(auto &vec : ans){
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }
}
*/