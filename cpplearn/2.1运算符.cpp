//////算数运算符，加减乘除和取模
////#include<iostream>
////using namespace std;
////void main() {
////	int a = 0;
////	int b = 0;
////	cout << "请输入a的值" << endl;
////	cin >> a;
////	cout << "请输入b的值" << endl;
////	cin >> b;
////	cout << "a*b= " << a * b << endl;
////	cout << "a%b=" << a % b << endl;
////	cout << "a/b= " << a / b << endl;//两个整数做相除运算结果依然为整数，会去除小数部分
////}
////两个小数是不能够进行取模运算的!!
//
//
////递增递减运算
//#include<iostream>
//using namespace std;
//void main() {
//	int i = 4;
//	int j = 4;
//	//前置操作
//	++i;
//	cout << i << endl;
//	//后置操作
//	++j;
//	cout << j << endl;
//	//前置和后置的操作
//	//前置是先+1再运算，后置是先运算再+1
//	int a1 = 10;
//	int a2 = 10;
//	int b1 = ++a1 * 2;//先运算再赋值，也就是10+1=11 --> 11*2 = 22
//	int b2 = a2++ *2 ;//先赋值再运算，也就是10*2=20 ;; a2+1=11
//	cout << b1 << endl;
//	cout << b2 << endl;
//}
///*
//5
//5
//22
//20*/