////案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//#include<stdio.h>
//#include<iostream>
//using namespace std;
//void sort(int* arr ,int arrlen) {
//	int i ,j;
//	int temp = 0;
//	for (i = 0; i < arrlen-1; i++) {
//		for (j = 0; j < arrlen-i-1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//			}
//		}
//	}for (i = 0; i < arrlen; i++) {
//		cout << arr[i] << endl;
//	}
//}
//void main() {
//	int arr[] = { 1,3,5,2,65,2 };
//	int arrlen = sizeof(arr) / sizeof(int);
//	sort(arr,arrlen);
//}