////#include<iostream>
////using namespace std;
////void main() {
////	int arr[2][3] = { 1,2,2,3,4,4 };
////	int i, j;
////	for (i = 0; i < 2; i++) {
////		for (j = 0; j < 3; j++) {
////			cout << arr[i][j] << " ";
////		}cout << "\n";
////	}
////}
//
////二维数组的名称用途
//#include<iostream>
//using namespace std;
//int main() {
//	int arr[2][3] = { 12,3,2,1,3,4 };
//	cout << "二维数组占用内存空间为: " << sizeof(arr) << endl;//24
//	cout << "二维数组第一行占用的内存空间为:" << sizeof(arr[0]) << endl;//12
//	cout << "二维数组第一个元素占用的内存空间为:" << sizeof(arr[0][0]) << endl;
//	cout << "二维数组行数" << sizeof(arr) / sizeof(arr[0]) << endl;//用数组的大小除以一行的大小，就可以得到有几行
//	cout << "二维数组列数" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;//用一行的大小除一行的一个元素的大小就可以知道一行有几个元素，即列数
//
//	cout << "二维数组的地址" << arr << endl;
//	cout << "二维数组第一个元素的地址" << &arr[0][0] << endl;
//}
//
///*
//
//二维数组占用内存空间为: 24
//二维数组第一行占用的内存空间为:12
//二维数组第一个元素占用的内存空间为:4
//二维数组行数2
//二维数组列数3
//二维数组的地址00000043C72FF5F8
//二维数组第一个元素的地址00000043C72FF5F8
//
//*/