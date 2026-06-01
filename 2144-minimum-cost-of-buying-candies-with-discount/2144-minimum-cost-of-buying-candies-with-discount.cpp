class Solution {
public:
    int minimumCost(vector<int>& cost) {
        priority_queue<int> mx(cost.begin(), cost.end());

        int cst = 0;
        int cnt = 0;

        while (!mx.empty()) {
            cnt++;

            if (cnt % 3 != 0) {  // pay for 1st and 2nd candy
                cst += mx.top();
            }

            mx.pop();  // always remove the candy
        }

        return cst;
    }
};