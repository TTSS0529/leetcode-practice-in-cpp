# 🌊 Sliding Window 模板

## 🎯 常见场景分类
- **固定大小窗口**：求窗口内最大/最小值、和、平均数  
- **最小/最大子串覆盖**：动态扩张 + 收缩窗口  
- **窗口 + 排序/限制条件**：在有序数组/映射下维持窗口  

---

## 📌 模板 1：最小覆盖子串型（扩张 + 收缩）
```cpp
string Solution::minWindow(string s, string t) {
    int m = s.size(), n = t.size();
    vector<int>    count(256, 0);
    vector<bool>    flag(256, false);
    for (unsigned char c : t) {
        flag[c] = true;
        ++count[c];
    }
    int left = 0, min_left = 0, min_len = m + 1, num_in = 0;
    for (int right = 0; right < m; ++right) {
        unsigned char   tar_r = static_cast<unsigned char>(s[right]);
        if (flag[tar_r]) {
            if (--count[tar_r] >= 0) {
                ++num_in;
            }
            while (num_in == n) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    min_left = left;
                }
                unsigned char  tar_l = static_cast<unsigned char>(s[left]); 
                if (flag[tar_l] && ++count[tar_l] > 0) {
                    --num_in;
                }
                ++left;
            }
        }
    }
    return min_len > m ? "" : s.substr(min_left, min_len);
}
```
- 题目: 0076 Minimum Window Substring

## 📌 模板 2：单调队列型（滑动窗口最大值）
```cpp
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq; // 存下标，保持单调递减
    vector<int> res;
    for (int i = 0; i < nums.size(); i++) {
        // 移除窗口外元素
        if (!dq.empty() && dq.front() <= i - k) dq.pop_front();

        // 保持单调递减队列
        while (!dq.empty() && nums[dq.back()] < nums[i]) dq.pop_back();

        dq.push_back(i);
        if (i >= k - 1) res.push_back(nums[dq.front()]);
    }
    return res;
}
```
- 题目: 0239 Sliding Window Maximum

## 📌 模板 3：排序 + 窗口型（平衡/满足条件）
```cpp
int minRemovals(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int left = 0, res = nums.size();
    for (int right = 0; right < nums.size(); right++) {
        // 保持条件：例如 nums[right] <= 2 * nums[left]
        while (nums[right] > 2LL * nums[left]) left++;
        res = min(res, (int)nums.size() - (right - left + 1));
    }
    return res;
}
```
- 题目: 3634 Minimum Removals To Balance Array
