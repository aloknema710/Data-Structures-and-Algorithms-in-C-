#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int total_water = 0;
        int leftMax = 0, rightMax = 0;
        for (int i = 0; i < height.size(); i++){
            int j = i;
            while (j>=0){
                leftMax = max(leftMax,height[j]);
                j--;
            }
            int k = i;
            while (k<height.size()){
                rightMax = max(rightMax,height[k]);
                k++;
            }
            total_water += min(leftMax,rightMax) - height[i];
        }
        return total_water;
    }
};

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    Solution obj;
    cout<<obj.trap(height);
}

/* most optimal one
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int total_water = 0;

        while (left < right) {
            if (height[left] < height[right]) {
                if (height[left] >= leftMax) {
                    leftMax = height[left];
                } else {
                    total_water += leftMax - height[left];
                }
                left++;
            } else {
                if (height[right] >= rightMax) {
                    rightMax = height[right];
                } else {
                    total_water += rightMax - height[right];
                }
                right--;
            }
        }

        return total_water;
    }
};

*/