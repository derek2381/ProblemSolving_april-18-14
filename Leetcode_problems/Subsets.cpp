// problem link
// https://leetcode.com/problems/subsets/description/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        // res.push_back({});

        int n = nums.size();
        int total_val = 1 << n;

        for(int i = 0; i < total_val;i++){
            vector<int> tempa;
            int temp = i, k = 0;

            while(temp > 0){
                if((temp & 1) != 0){
                    tempa.push_back(nums[k]);
                }
                k++;
                temp >>= 1;
            }

            res.push_back(tempa);
        }

        return res;
    }
};
