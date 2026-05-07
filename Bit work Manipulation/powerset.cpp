#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> >powerSet(vector<int> &arr){
        vector<vector<int>> ans;
        int n = arr.size();      // n is 3 and subset is 8

        int subsets = 1 << n;    // 1<<n is squaring while n<<1 is doubling.
        
        for (int i = 0; i < subsets-1; i++){     // subset number
            vector<int> subarray;
            for (int j = 0; j < n; j++){       // index in an array
                if(i && (1 << j)) subarray.push_back(arr[j]);         // check if j-th bit of i is on, if it's on
            }                                                 // we add that respective element i.e
            ans.push_back(subarray);
        }
        return ans;
    }
};

int main(){
    Solution s;
    vector<int> arr = {1,2,3};
    s.powerSet(arr);
}




/*
Desired Output-
2 1 0

0 0 0 
0 0 1
0 1 0
0 1 1
1 0 0
1 0 1
1 1 0
1 1 1 


🔁 OUTER LOOP (i from 0 → 7)
➤ i = 0 (binary = 000)

Start: subarray = {}

j	(1 << j)	i & (1<<j)	Action
0	001	        000 & 001 = 0	skip
1	010	        000 & 010 = 0	skip
2	100	        000 & 100 = 0	skip

👉 Result: {}

➤ i = 1 (binary = 001)

Start: subarray = {}

j	(1 << j)	i & (1<<j)	Action
0	001	        001 & 001 = 1	add arr[0] = 1
1	010	        001 & 010 = 0	skip
2	100	        001 & 100 = 0	skip

👉 Result: {1}

➤ i = 2 (binary = 010)
j	(1 << j)	i & (1<<j)	Action
0	001	        010 & 001 = 0	skip
1	010	        010 & 010 = 2	add arr[1] = 2
2	100	        010 & 100 = 0	skip

👉 Result: {2}

➤ i = 3 (binary = 011)
j	(1 << j)	i & (1<<j)	Action
0	001	        011 & 001 = 1	add 1
1	010	        011 & 010 = 2	add 2
2	100	        011 & 100 = 0	skip

👉 Result: {1,2}

➤ i = 4 (binary = 100)
j	(1 << j)	i & (1<<j)	Action
0	001	        100 & 001 = 0	skip
1	010	        100 & 010 = 0	skip
2	100	        100 & 100 = 4	add 3

👉 Result: {3}

➤ i = 5 (binary = 101)
j	(1 << j)	i & (1<<j)	Action
0	001	        101 & 001 = 1	add 1
1	010	        101 & 010 = 0	skip
2	100	        101 & 100 = 4	add 3

👉 Result: {1,3}

➤ i = 6 (binary = 110)
j	(1 << j)	i & (1<<j)	Action
0	001	        110 & 001 = 0	skip
1	010	        110 & 010 = 2	add 2
2	100	        110 & 100 = 4	add 3

👉 Result: {2,3}

➤ i = 7 (binary = 111)
j	(1 << j)	i & (1<<j)	Action
0	001	        111 & 001 = 1	add 1
1	010	        111 & 010 = 2	add 2
2	100	        111 & 100 = 4	add 3

👉 Result: {1,2,3}
*/