//////��ֻС�����
////#include<iostream>
////#include<stdio.h>
////using namespace std;
////void main() {
////	int pig[6] = { 10,20,4,21,12 };
////	int i;
////	int max = pig[0];//�Ƚ�����ĵ�һ��Ԫ���϶�Ϊ���ֵ
////	int maxindex = 0;//����maxindex�������������
////	for (i = 0; i < 5; i++) {
////		if (pig[i] > max) {
////			max = pig[i];
////			maxindex = i;
////		}
////		
////	}printf("���ص�С���ǵ�%d��С����������Ϊ:%d", maxindex+1, max);
////}
//
////��������
//#include<iostream>
//using namespace std;
//void main() {
//	//��������
//	int arr[] = { 1,3,2,5,4 };
//	int arrlen = sizeof(arr) / sizeof(int);
//	//ʵ������
//	//1.��¼��ʼ�±�Ϊֹ
//	//2.��¼�����±�λ��
//	//3.��ʼ�±�������±��Ԫ�ػ���
//	//4.��ʼλ��++ ����λ��--
//	//5.ѭ��ִ��1������ֱ����ʼλ�ô��ڽ���λ��
//	int start = 0;
//	int end = sizeof(arr) / sizeof(int) - 1;//�����±�
//	while (start < end) {
//		//ʵ��Ԫ�صĻ���
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//
//		//�±����
//		start++;
//		end--;
//	}
//	//��ӡ���
//
//	cout << "����Ԫ�����������" << endl;
//	for (int i = 0; i < 5; i++) {
//		cout << arr[i] << endl;
//	}
//}