////#include<iostream>
////using namespace std;
//////1.new�Ļ����﷨
//////2.�ڶ�������new��������
////int* func() {
////	//�ڶ�������һ�����͵�����
////	int *p = new int(20);//new���ص��Ǹ��������͵�ָ�룬���������int���͵�ָ��
////	return p;
////}
////void main() {
////	int* p1 = func();
////	cout << *p1 << endl;
////	cout << *p1 << endl;
////	//�����������ɳ���Ա�������٣��ͷ�
////	//����ͷŶ��������ݣ���Ҫ�ùؼ���delete
////	delete p1;//�ͷŶ���
////	//cout << *p1 << endl;//�ڴ��Ѿ��ͷţ��ٴη����ǷǷ��ģ���
////}
//
//
////�ڶ�������һ������
//#include<iostream>
//using namespace std;
//int test() {
//	int *arr = new int[10];//��ָ�����������׵�ַ
//	for (int i = 0; i < 10; i++) {
//		arr[i] = i + 100;//��10��Ԫ�ظ�ֵ��100-109
//	}	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//	return 0;
//	delete[]arr;//�ͷ������ʱ��Ҫ��������!!!![]
//}
//void main() {
//	test();//���ú���test()
//}