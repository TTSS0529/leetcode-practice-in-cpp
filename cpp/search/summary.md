# 🔍 Search

## 🎯 常见场景分类
- **经典二分型**：直接在有序数组中找元素
- **Lower/Upper Bound 型**：找边界位置（第一个 ≥ target / 最后一个 ≤ target）
- **旋转数组型**：有旋转点，需判断哪一半有序
- **有序矩阵型**：二维数组，单调行/列
- **特殊判定型**：答案满足单调性，用二分逼近
- **异或/配对型**：索引对齐规律，利用二分找唯一元素

---

## 📌 模板 1：经典二分型
```cpp
int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
```
- 题目: 0704 Binary Search, 0035 Search Insert Position

## 📌 模板 2：Lower/Upper Bound 型
```cpp
int lower_bound(vector<int>& nums, int target) {
    int left = 0, right = nums.size(); // 注意右边开区间
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target) left = mid + 1;
        else right = mid;
    }
    return left; // 第一个 >= target 的位置
}
```
- 题目: 0034 Find First and Last Position, 0278 First Bad Version

## 📌 模板 3：旋转数组型
```cpp
int searchRotated(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) return mid;
        // 左半边有序
        if (nums[left] <= nums[mid]) {
            if (nums[left] <= target && target < nums[mid]) right = mid - 1;
            else left = mid + 1;
        }
        // 右半边有序
        else {
            if (nums[mid] < target && target <= nums[right]) left = mid + 1;
            else right = mid - 1;
        }
    }
    return -1;
}
```
- 题目: 0033 Search in Rotated Sorted Array, 0081 含重复值版本, 0153/0154 Find Minimum

## 📌 模板 4：二维矩阵搜索
```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int row = 0, col = n - 1;
    while (row < m && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;
        else row++;
    }
    return false;
}
```
- 题目: 0074 Search a 2D Matrix (二分整体), 0240 Search a 2D Matrix II (单调性扫描)

## 📌 模板 5：单调判定型（二分答案）
```cpp
int firstBadVersion(int n) {
    int left = 1, right = n;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (isBadVersion(mid)) right = mid; // 答案在左边
        else left = mid + 1; // 答案在右边
    }
    return left; // 第一个 true
}
```
- 题目: 0278 First Bad Version, 0069 Sqrt(x), 0875 Koko Eating Bananas(扩展)

## 📌 模板 6：索引规律 / 配对型
```cpp
int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (mid % 2 == 1) mid--; // 保证 mid 是偶数
        if (nums[mid] == nums[mid + 1]) left = mid + 2;
        else right = mid;
    }
    return nums[left];
}
```
- 题目: 0540 Single Element in a Sorted Array
