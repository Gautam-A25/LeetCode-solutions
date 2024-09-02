class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> people;
        for(int i=0; i<names.size(); i++){
            people.push_back({heights[i],names[i]});
        }
        sort(people.begin(),people.end(), greater<pair<int, string>>());

        for(int i=0; i<names.size(); i++){
            names[i] = people[i].second;
        }

        return names;
    }
};