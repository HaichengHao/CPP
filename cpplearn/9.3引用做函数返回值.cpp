//#include<iostream>
//using namespace std;
//int& fun() {
//	static int a = 10;//加了static关键字后，变量将放在全局区，程序结束后由系统释放
//	return a;
//}
//void main() {
//	int& x = fun();//x是a的别名
//	cout << x << endl;
//	fun() = 100;//函数的调用可以作为左值,相当于a=100
//	cout << x << endl;
//}