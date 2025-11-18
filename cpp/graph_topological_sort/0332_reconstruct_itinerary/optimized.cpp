#include "reconstruct_itinerary.hpp"

vector<string> Solution::findItinerary(vector<vector<string>>& tickets) {
    vector<string>  res;
    if (tickets.empty()) return res;
    unordered_map<string, multiset<string>> hash;
    for (const auto& ticket : tickets) {
        hash[ticket[0]].insert(ticket[1]);
    }
    vector<string>  q;
    q.push_back("JFK");
    while (!q.empty()) {
        string  next = q.back();
        if (hash[next].empty()) {
            res.push_back(next);
            q.pop_back();
        } else {
            q.push_back(*hash[next].begin());
            hash[next].erase(hash[next].begin());
        }
    }
    reverse(res.begin(), res.end());
    return res;
}