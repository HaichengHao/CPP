////#include<iostream>
////using namespace std;
//////1.new的基本语法
//////2.在堆区利用new开辟数组
////int* func() {
////	//在堆区创建一个整型的数据
////	int *p = new int(20);//new返回的是该数据类型的指针，在这里就是int类型的指针
////	return p;
////}
////void main() {
////	int* p1 = func();
////	cout << *p1 << endl;
////	cout << *p1 << endl;
////	//堆区的数据由程序员管理，开辟，释放
////	//如果释放堆区的数据，需要用关键字delete
////	delete p1;//释放堆区
////	//cout << *p1 << endl;//内存已经释放，再次访问是非法的！！
////}
//
//
////在堆区开辟一个数组
//#include<iostream>
//using namespace std;
//int test() {
//	int *arr = new int[10];//用指针接收数组的首地址
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;//给10个元素赋值，100-109
//	}	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	return 0;
//	delete[]arr;//释放数组的时候要加中括号!!!![]
//}
//void main() {
//	test();//调用函数test()
//}