class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        vector<int> sector;
        int m = baskets.size();
        int a = sqrt(m);

        int count = 0, mx = 0;
        for(int i = 0; i<m; i++){
            if(count == a){
                sector.push_back(mx);
                mx = baskets[i];
                count = 1;
            }
            else{
                count++;
                mx = max(mx, baskets[i]); 
            }
        }
        sector.push_back(mx);

        int remain = 0;

        for(int i=0;i<fruits.size(); i++){
            int k = 0, set = 1;
            for(int j = 0; j<m;j+=a){
                if(sector[k]<fruits[i]){
                    k++;
                    continue;
                }

                for(int r = j; j<min(j+a, m); r++){
                    if(baskets[r] >= fruits[i]){
                        set = 0;
                        baskets[r] = 0;
                        break;
                    }
                }

                if(set == 0){
                    sector[k] = 0;
                    for(int r = j; r<min(j+a, m); r++){
                        sector[k] = max(sector[k], baskets[r]);
                    }
                    break;
                }
            }
            remain += set;
        }
        return remain;
    }
};