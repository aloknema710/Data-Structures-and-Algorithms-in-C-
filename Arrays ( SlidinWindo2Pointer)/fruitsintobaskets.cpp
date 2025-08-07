// every index of my array is pointing to the number of specefic fruits {variety of fruit arr[i]} produced by each tree(i)
// and we have to find the maximum number of single type of fruits that can be collected in a basket
// and we can collect fruits from consecutive trees only 
// 1 basket can hold only 1 type of fruits
#include <bits/stdc++.h>
using namespace std;

int brutemaxnofFruits(vector<int>& arr, int k) {
    int maxFruits = 0;
    for(int  i = 0; i < arr.size(); i++) {
        set<int> fruitTypes; // to keep track of the types of fruits in the current window
        for(int j = i; j < arr.size(); j++) {
            fruitTypes.insert(arr[j]);
            if(fruitTypes.size() <= k){           // if we have more than k types of fruits, we cannot collect more
                maxFruits = max(maxFruits, j - i + 1); // update the maximum fruits collected
            }
            else break; // if we have more than k types of fruits, break the inner loop
        }
    }
}

// int bettermaxnofFruits(vector<int>& arr, int k) {
//     int maxFruits = 0;
//     for (int i = 0; i < arr.size(); i++) {
//         int count = 0;
//         unordered_map<int, int> fruitCount; // to count the number of each type of fruit
//         for (int j = i; j < arr.size(); j++) {
//             fruitCount[arr[j]]++;
//             if (fruitCount.size() > k) { // if we have more than k types of fruits
//                 break; // we cannot collect more fruits in this case
//             }
//             count += arr[j]; // add the current fruit to the count
//             maxFruits = max(maxFruits, count); // update the maximum fruits collected
//         }
//     }
//     cout << "Maximum number of fruits collected: " << maxFruits << endl;
//     return maxFruits;
// }

int optimalnooffruits(vector<int> arr, int k){
    int maxFruits = 0;
    int left = 0, right = 0;
    while(right < arr.size()){
        unordered_map<int, int> fruitCount;
        fruitCount[arr[right]]++;
        if(fruitCount.size() > k){
            fruitCount[arr[left]]--;
            if(fruitCount[arr[left]] == 0) fruitCount.erase(fruitCount[arr[left]]);
            left++;
        }
        if (fruitCount.size() <= k) maxFruits = max(maxFruits, right - left + 1);
        right++;
    }
    return maxFruits;
}

int main(){
    vector<int> arr = {3, 3, 3, 1, 2, 1, 1, 2, 3, 3, 4};//index => tree and arr[index] => variety of frt
    int k = 2; // number of baskets
    // cout<<brutemaxnofFruits(arr, k); 
    cout<<optimalnooffruits(arr, k); 
}


/*
You're calculating j - i, which gives you the number of gaps between indices, not the number of elements.

For example:
i = 3, j = 8
j - i = 5, but this actually includes 6 elements (from arr[3] to arr[8] inclusive)
So, you're off by one.
*/