#include <unordered_map>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
          unordered_map<string, vector<string>>odr;
    
          for(int i = 0; i < strs.size(); i++){
           string s = strs[i];
           string key = s;
            sort(key.begin(), key.end());
               odr[ key ].push_back( s ); 
          }       
vector<vector<string>> result;
for(auto &pair : odr)
{
    result.push_back(pair.second);
}
return result;
          
    
    }
};
