class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int j = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+j);
        reverse(nums.begin()+j, nums.end());
    }
};