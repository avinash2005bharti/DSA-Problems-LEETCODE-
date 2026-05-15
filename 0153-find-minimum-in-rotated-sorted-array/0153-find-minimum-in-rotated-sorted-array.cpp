class Solution {
public:
    int findMin(vector<int>& arr) {
        int lo = 0;
        int hi = arr.size() - 1;
        int ans = INT_MAX;

        while (lo <= hi) {

            // Agar subarray already sorted hai
            if (arr[lo] <= arr[hi]) {
                ans = min(ans, arr[lo]);
                break;
            }

            int mid = lo + (hi - lo) / 2;

            // Left part sorted
            if (arr[lo] <= arr[mid]) {
                ans = min(ans, arr[lo]);
                lo = mid + 1;
            }
            // Right part sorted
            else {
                ans = min(ans, arr[mid]);
                hi = mid - 1;
            }
        }

        return ans;
    }
};