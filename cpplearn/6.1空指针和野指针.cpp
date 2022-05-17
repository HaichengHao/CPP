////#include<iostream>
////using namespace std;
////void main() {
////	//空指针用于给指针变量进行初始化
////	int* p = NULL;
////	//空指针是不能够进行访问的
////	cout << *p << endl;
////}
//
////野指针：指针变量指的是非法的内存空间
////在程序中一定要避免出现野指针
//#include<stdio.h>
//void main() {
//	int* p = (int*)0x1100;//报错，没有这块地址的访问权限
//}