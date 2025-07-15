#include<bits/stdc++.h>
using namespace std;
// int missingK(vector<int> vec,int k){
//     for (int i = 0; i < vec.size(); i++){
//         if (vec[i] < k){
//             k++;
//         }
//         else break;
//     }
//     return k;
// }


// figuring out two nearby indexes
int missingK(vector<int> vec,int k){
    int low = 0, high = vec.size()-1;
    while (low <= high) {
        int mid = (high + low) / 2;
        int missing = vec[mid] - (mid + 1);
        if(missing<k) low = mid + 1;
        
        else high = mid - 1;
    }
    return k + high + 1;      // in this example 5 + 3 + 1; 
}
int main(){
    vector<int> vec = {2, 3, 4, 7, 11};
    int k = 5;
    int ans = missingK(vec, k);
    cout << "The missing number is: " << ans << "\n";
    return 0;
}