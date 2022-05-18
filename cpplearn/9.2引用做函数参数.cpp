////引用做函数参数
////作用：函数传参时，可以利用引用的技术让形参修饰实参
////优点：可以简化指针修改实参
//
//#include<iostream>
//using namespace std;
////值传递实现交换
////int fun( int x,int y) {
////	int temp = x;
////	x = y;
////	y = temp;
////}
////void main() {
////	int x = 2;
////	int y = 9;
////	fun(x, y);
////	cout << "x=" << x << "y=" << y << endl;//x=2y=9值传递不会修改实参
////
////}
////地址传递实现交换
////int fun2(int* x, int* y) {
////	int temp = *x;
////	*x = *y;
////	*y = temp;
////	return 0;
////}
////void main() {
////	int x = 10;
////	int y = 9;
////	fun2(&x, &y);
////	cout << "x=" << x << "y=" << y << endl;//x=9y=10地址传递会修改实参
////}
//
////利用引用来实现交换
//int fun3(int& x, int& y) {
//	int temp = x;
//	x = y;
//	y = temp;
//	return 0;
//}
//void main() {
//	int x = 10;
//	int y = 20;
//	fun3(x, y);
//	cout << "x=" << x << "y=" << y << endl;//x=20y=10,引用传递，形参也会修饰实参
//}