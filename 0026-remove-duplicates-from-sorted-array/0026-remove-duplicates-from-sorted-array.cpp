class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int i = 0;
        int j = 1;
        while (j < n) {
            if (nums[i] != nums[j]) {
                i++;             // move i forward
                nums[i] = nums[j]; // put the unique element
            }
            j++;
        }
        return i + 1; // number of unique elements
    }
};
