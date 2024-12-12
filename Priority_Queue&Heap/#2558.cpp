#include <queue>
#include <cmath>  
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int gift: gifts) {
            pq.push(gift);
        }
        for(int i=0; i<k; i++){
            int maxGift = pq.top();
            pq.pop();
            int remainingGift = floor(sqrt(maxGift));
            pq.push(remainingGift);
        }
        long long totalRemaining = 0;
        while(!pq.empty()){
            totalRemaining += pq.top();
            pq.pop();
        }
        return totalRemaining;
    }
};