////goto是很强大的语句，一般不能轻易使用
//#include<iostream>
//using namespace std;
//void main() {
//	cout << 1 << endl;
//	goto FLAG;
//	cout << 3 << endl;//这行会不执行，因为上面的goto FLAG会直接跳到FLAG:
//	goto FLAG2;
//
//FLAG:
//	cout << 2 << endl;
//FLAG2:
//	cout << 4 << endl;
//}