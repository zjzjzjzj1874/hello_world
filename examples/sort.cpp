//
// Created by zjzjzjzj1874 on 2024/10/31.
//

#include "sort.h"

#include <vector>

// 选择排序，arr = [2,5,4,7,9,6,3], size代表数组的大小
void select_sort(int* arr, int size) {
    int n = size/sizeof(arr[0]);

    // 思路：每次找出最小的数，然后和i交换位置
    for (int i = 0; i < n; i++) {
        int min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

// 冒泡排序
void bubble_sort(int* arr, int size) {
  int n = size/sizeof(arr[0]); // 数组的长度
  for (int i = 0; i < n; i++) {
    for (int j = i+1; j < n; j++) {
      if (arr[i] > arr[j]) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

// 翻转数组
void reverse_arr(int arr[], int size) {
    int n = size/sizeof(arr[0]); // 求数组长度
    for (int i = 0; i < n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

bool isMagicSquare(const std::vector<std::vector<int>>& s) {
    int n = s.size();
    for (const std::vector<int>& ss :s) {
        if (ss.size() != n) { // 校验是否是N阶幻方
            return false;
        }
    }

    // 计算目标值
    int target = (1+n*n)*n/2; // 每一行应该的值,等差数列求和

    // 检验对角线1,2
    int s1 = 0, s2 = 0;

    for (int i = 0; i < n; i++) {
        // 检验行列之和
        int sumRow = 0, sumCol = 0;
        for (int j = 0; j < n; j++) {
            sumRow += s[i][j];
            sumCol += s[j][i];
        }
        if (sumRow != target || sumCol != target) {
            return false;
        }
        s1 += s[i][i];
        s2 += s[i][n-i-1];
    }

    if (s1 != target || s2 != target) {
        return false;
    }

    return true;
}
