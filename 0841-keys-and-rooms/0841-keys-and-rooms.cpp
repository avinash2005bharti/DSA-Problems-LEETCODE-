class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>v;
        queue<int>q;
        q.push(0);
        v.insert(0);
        while(! q.empty()){
            int curr = q.front();
            q.pop();
            for(int x : rooms[curr]){
                if(v.count(x) == 0) {
                    q.push(x);
                    v.insert(x);
                }
            }
          
        }
        return  v.size()== rooms.size();
    }
};