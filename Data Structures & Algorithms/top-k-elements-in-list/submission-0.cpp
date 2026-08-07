class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num : nums)
        {
            mp[num]++;
        }
        vector<pair<int,int>> pairs;
        for(auto& [ele, freq] : mp)
        {
            pairs.push_back({freq, ele});
        }
        sort(pairs.begin(), pairs.end(), greater<pair<int,int>>());

        vector<int> res;

        for(int i = 0; i < k; i++)
        {
            res.push_back(pairs[i].second);
        }
        return res;
    }
};
