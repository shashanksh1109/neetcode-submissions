#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> visited;

        for(int val:nums){
            if(visited.count(val)){
                return true;

            }
            visited.insert(val);
        }
        return false;
       
    }
};