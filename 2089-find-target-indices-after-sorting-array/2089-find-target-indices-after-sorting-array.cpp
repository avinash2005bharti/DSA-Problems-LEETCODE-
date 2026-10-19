// o(n) approach
class Solution {
public:
    vector<int>idx;
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller = 0;
        int equal = 0;
        int larger = 0;
        for(int i: nums){
            if(i<target) smaller++;
            else if (i==target) equal++;
            else larger++;
        }
        cout<<smaller<<" "<<equal<<" "<<larger;
        for(int i=smaller;i<smaller+equal;i++) idx.push_back(i);
    return idx;
    }
};