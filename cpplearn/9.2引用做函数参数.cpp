////��������������
////���ã���������ʱ�������������õļ������β�����ʵ��
////�ŵ㣺���Լ�ָ���޸�ʵ��
//
//#include<iostream>
//using namespace std;
////ֵ����ʵ�ֽ���
////int fun( int x,int y) {
////	int temp = x;
////	x = y;
////	y = temp;
////}
////void main() {
////	int x = 2;
////	int y = 9;
////	fun(x, y);
////	cout << "x=" << x << "y=" << y << endl;//x=2y=9ֵ���ݲ����޸�ʵ��
////
////}
////��ַ����ʵ�ֽ���
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
////	cout << "x=" << x << "y=" << y << endl;//x=9y=10��ַ���ݻ��޸�ʵ��
////}
//
////����������ʵ�ֽ���
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
//	cout << "x=" << x << "y=" << y << endl;//x=20y=10,���ô��ݣ��β�Ҳ������ʵ��
//}