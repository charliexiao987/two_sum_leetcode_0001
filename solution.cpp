#include <algorithms>
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> sums;
        multimap<int,int> mp;
        
        multimap<int,int>::iterator f;
        for(int i=0; i<numbers.size();i++)
        {
            int left=target-numbers[i];
            f=mp.find(left);
            if(f!=mp.end())
            {
                sums.push_back(i+1);
                sums.push_back(f->second+1);
               
                break;
            }
            mp.insert(pair<int,int>(numbers[i],i));
        }
        sort(sums.begin(),sums.end());
        return sums;
    }
};
/******/

