#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> returnArray;
        for (int i=0;i<nums.size();i++){
            int comp = target - nums[i];

            if(returnArray.count(comp)){
                return {returnArray[comp],i};
            }

            returnArray[nums[i]]=i;
        }
        return{};
    }
};
