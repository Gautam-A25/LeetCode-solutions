class Solution {
    public:
        int findLucky(vector<int>& arr) {
            unordered_map<int, int> freq;
            int ans = -1;
            for(int i = 0; i<arr.size(); i++){
                if(freq.find(arr[i]) == freq.end()) freq[arr[i]] = 1;
                else freq[arr[i]]++;
            }
            for(auto pair: freq){
                if(pair.first == pair.second){
                    if(ans<pair.first) ans = pair.first;
                }
            }
            return ans;
        }
    };