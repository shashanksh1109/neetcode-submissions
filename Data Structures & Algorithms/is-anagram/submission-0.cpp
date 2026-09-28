#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {

        if (sizeof(s)!= sizeof(t))
        return false;
        unordered_map <char, int> fM1,fM2;
        for(int val:s){
            fM1[val]++;
        }
        for(int val:t){
            fM2[val]++;
        }
        return fM1==fM2;
    }
};
