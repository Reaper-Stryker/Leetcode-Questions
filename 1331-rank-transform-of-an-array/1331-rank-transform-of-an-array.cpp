class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp = arr;
        sort(temp.begin(), temp.end());
        unordered_map<int, int> map;
        int rank = 1;
        for(int i : temp){
            if(map.find(i) == map.end()){
                map[i] = rank;
                rank++;
            }
        }
        for(int i = 0; i < n; i++){
            arr[i] = map[arr[i]];
        }
        return arr;
    }
};