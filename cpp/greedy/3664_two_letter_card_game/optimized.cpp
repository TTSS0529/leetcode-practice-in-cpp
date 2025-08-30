#include "two_letter_card_game.hpp"

int Solution::score(vector<string>& cards, char x) {
    int both = 0;
    vector<int> left(26, 0), right(26, 0);
    for (const auto& card : cards) {
        if (card[0] == x && card[1] == x) ++both;
        else if (card[0] == x) ++right[card[1] - 'a'];
        else if (card[1] == x) ++left[card[0] - 'a'];
    }
    auto    interPair = [](vector<int>& count) {
        int sum = 0, rest = 0;
        for (int num : count) {
            sum += num;
            rest = max(rest, num);
        }
        int pairs = min(sum / 2, sum - rest);
        int leftover = sum - 2 * pairs;
        return make_pair(pairs, leftover);
    };
    auto    pairL = interPair(left);
    auto    pairR = interPair(right);
    int pairs = pairL.first + pairR.first;
    int leftover = pairL.second + pairR.second;
    int use = min(both, leftover);
    both -= use;
    int res = pairs + use;
    res += min(pairs, both / 2);
    return res;
}