//#include<iostream>
//using namespace std;
////常量的定义方式
////1.#define 常量名  常量值 <--无分号
////2.const 类型 变量名 = 变量值 ；<--有;号
////const 修饰的变量是不可以修改的
//#define DAY 7
//
//const int workday = 5;
//int main() {
//	//DAY = 14;<--注意会报错，不能这样定义，因为#define定义的常量是不可修改的
//
//	
//	//workday = 46;//报错，因为已经被const修饰的变量是不可修改的
//	cout << "一周总共有: " << DAY << "天\n" << endl;
//	cout << "一周要工作: " << workday << "天" << endl;
//
//}