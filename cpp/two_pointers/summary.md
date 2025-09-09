# 🪝 Two Pointers

## 🎯 常见场景分类
- **左右夹逼型**：有序数组求和、平方和、3Sum  
- **子序列扫描型**：判断子序列、最长单词删除匹配  
- **链表快慢指针型**：找环、找中点、找交点、找重复数  
- **允许一次错误型**：近似回文、允许一次跳过  
- **排序 + 双指针计数型**：计数对、变体 3Sum  
- **归并型**：合并有序数组 / 链表  

---

## 📌 模板 1：左右夹逼型
```cpp
int left = 0, right = n - 1;
while (left < right) {
    long sum = nums[left] + nums[right];
    if (sum == target) {
        // 处理结果
    } else if (sum < target) {
        left++;
    } else {
        right--;
    }
}
```
- 题目: 0167 Two Sum II, 0015 3Sum, 0633 Sum of Square Numbers

## 📌 模板 2：子序列扫描型
```cpp
bool isSubsequence(string s, string t) {
    int i = 0, j = 0;
    while (i < s.size() && j < t.size()) {
        if (s[i] == t[j]) i++;
        j++;
    }
    return i == s.size();
}
```
- 题目: 0392 Is Subsequence, 0524 Longest Word in Dictionary

## 📌 模板 3：链表快慢指针型
```cpp
// 检测环 & 找入环点
ListNode* detectCycle(ListNode* head) {
    ListNode *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // 相遇
            ListNode* p = head;
            while (p != slow) {
                p = p->next;
                slow = slow->next;
            }
            return p; // 入环点
        }
    }
    return nullptr;
}
```
- 题目: 0142 Linked List Cycle II, 0876 Middle of the Linked List, 0160 Intersection of Two Linked Lists, 0287 Find the Duplicate Number

## 📌 模板 4：允许一次错误型
```cpp
bool isPalindrome(string& s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++; r--;
    }
    return true;
}

bool validPalindrome(string s) {
    int l = 0, r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
        }
        l++; r--;
    }
    return true;
}
```
- 题目: 0680 Valid Palindrome II

## 📌 模板 5：排序 + 双指针计数型
```cpp
sort(nums.begin(), nums.end());
int left = 0, right = 0;
while (left < n) {
    while (right < n && condition(nums[left], nums[right])) {
        right++;
    }
    // 利用 right - left 得到结果
    left++;
}
```
- 题目: 3649 Number of Perfect Pairs, 0015 3Sum 变体

## 📌 模板 6：归并型
```cpp
int i = m - 1, j = n - 1, k = m + n - 1;
while (i >= 0 && j >= 0) {
    if (nums1[i] > nums2[j]) nums1[k--] = nums1[i--];
    else nums1[k--] = nums2[j--];
}
while (j >= 0) nums1[k--] = nums2[j--];
```
- 题目: 0088 Merge Sorted Array
