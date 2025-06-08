class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int s = 0;
        int e = nums.size()-1;
        int pivot = 0;
        while(s<=e){
            int mid = (s+e)/2;
            if(nums[mid] == target){
                return true;
            } else if(nums[mid] > target){
                if(nums[mid] < nums[e]){
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            } else if(nums[mid] < target){
                if(nums[mid] > nums[e]){
                    e = mid - 1;
                } else {
                    s = mid + 1;
                }
            }
        }
        return false;
    }
};