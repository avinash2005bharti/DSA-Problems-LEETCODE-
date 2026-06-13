class Solution {
public:
    int func(string words, vector<int>& weights) {
        int n = words.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += weights[words[i] - 'a'];
        }

        return sum % 26;
    }

    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans;

        for(int i = 0; i < words.size(); i++) {
            int x = func(words[i], weights);

            ans.push_back('z' - x);
        }

        return ans;
    }
};