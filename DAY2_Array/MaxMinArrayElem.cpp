class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int maxi = INT_MIN;
        int mini = INT_MAX;
        
        for(int i = 0; i< arr.size(); i++)
        {
            if(arr[i] > maxi)
            {
                maxi = arr[i];
            }
            
            if(arr[i] < mini)
            {
                mini = arr[i];
            }
        }
        
        vector<int>ans;
        ans.push_back(mini);
        ans.push_back(maxi);
        
        return ans;
    }
};




// 2091. Removing Minimum and Maximum From Array

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minIdx = 0, maxIdx = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] < nums[minIdx])
            {
               minIdx = i;
            }
            if(nums[i] > nums[maxIdx])
            {
                maxIdx = i;
            }
        }

        int a = max(minIdx, maxIdx) + 1; 
        int b = n - min(minIdx, maxIdx);            
        int c = min(minIdx, maxIdx) + 1 + n - max(minIdx, maxIdx); 

        return min({a, b, c});
    }
};