class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        

        //Algo 1
        // int n = nums.size();
        // vector<int> ans(2);
        // for (int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             if(i>j){
        //                 ans[0]=j;
        //                 ans[1]=i;
        //             }
        //             else{
        //                 ans[0]=i;
        //                 ans[1]=j;
        //             }
        //             break;
        //         }
        //     }
        // }
        // return ans;


        //Algo 2
        int n = nums.size();
        unordered_map<int, int> mp; 

        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }
            mp.insert({nums[i], i});
        }
        return {};



    }
};
