class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> arri;
    
        for( int i = 0 ; i < nums.size() ; i++) {

            int diff = target - nums[i];

// current is nums[i] i want the target - nums[i] and diff is the index of the previousely seen number 
   
   //prevMap = {} # val : index

   
          if(arri.find(diff) != arri.end()) {

            return{arri[diff] , i};
          }

          arri[nums[i]] = i;

        }
    }

    
      
  




};
