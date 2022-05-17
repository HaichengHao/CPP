//////五只小猪称重
////#include<iostream>
////#include<stdio.h>
////using namespace std;
////void main() {
////	int pig[6] = { 10,20,4,21,12 };
////	int i;
////	int max = pig[0];//先将数组的第一个元素认定为最大值
////	int maxindex = 0;//创建maxindex索引，用来存放
////	for (i = 0; i < 5; i++) {
////		if (pig[i] > max) {
////			max = pig[i];
////			maxindex = i;
////		}
////		
////	}printf("最重的小猪是第%d个小猪，它的重量为:%d", maxindex+1, max);
////}
//
////逆序排序
//#include<iostream>
//using namespace std;
//void main() {
//	//创建数组
//	int arr[] = { 1,3,2,5,4 };
//	int arrlen = sizeof(arr) / sizeof(int);
//	//实现逆置
//	//1.记录起始下标为止
//	//2.记录结束下标位置
//	//3.起始下标与结束下标的元素互换
//	//4.起始位置++ 结束位置--
//	//5.循环执行1操作，直到起始位置大于结束位置
//	int start = 0;
//	int end = sizeof(arr) / sizeof(int) - 1;//结束下标
//	while (start < end) {
//		//实现元素的互换
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		//下标更新
//		start++;
//		end--;
//	}
//	//打印输出
//
//	cout << "数组元素逆序排序后" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//}