/*
Time Complexity : nlog(n)
Space Complexity : O(n)
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> temp(nums.size());
        for(int i = 0; i < nums.size(); i++){
            temp[i].first = nums[i];
            temp[i].second = i;
        }
        sort(temp.begin(), temp.end());
        int left = 0;
        int right = temp.size() - 1;
        int first = 0;
        int second = temp.size();
        while(left < right){
            int sum = temp[left].first + temp[right].first;
            if(sum == target){
                first = temp[left].second;
                second = temp[right].second;
                break;
            }
            else if(sum < target){
                left++;
            }
            else {
                right--;
            }
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};