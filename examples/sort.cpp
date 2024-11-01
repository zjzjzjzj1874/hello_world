//
// Created by zjzjzjzj1874 on 2024/10/31.
//

#include "sort.h"

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