//#include<iostream>
//using namespace std;
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//
//
//
////ֵ���ݣ�ֵ���ݵ��ββ�Ӱ��ʵ��
//void printstudent(Student stu) {
//	stu.age = 100;
//	cout << "ֵ���ݺ����д�ӡ���Ľ��\n" << "����" << stu.name << "����" << stu.age << "����" << stu.score << endl;
//}
////��ַ���ݣ���ַ���ݵ��β�Ӱ��ʵ��
//void printstudent2(struct Student *p) {
//	p->name = "����";
//	cout << "��ַ���ݺ����д�ӡ���Ľ��\n" << "����" <<p->name << "����" << p->age << "����" << p->score << endl;
//}
//
//int main() {
//	struct Student stu;
//	stu.name = "����";
//	stu.age = 20;
//	stu.score = 70;
//	
//	//ֵ����
//	printstudent(stu);//���ṹ�������Ϊ�����Ĳ���
//	
//	//��ַ����
//	printstudent2(&stu);
//	cout << "main()�����д�ӡ���Ľ��\n" << "����" << stu.name << "����" << stu.age << "����" << stu.score << endl;
//
//}
///*
//ֵ���ݺ����д�ӡ���Ľ��
//������������100����70 <--- ֵ�����βε��޸Ĳ���Ӱ��ʵ��
//��ַ���ݺ����д�ӡ���Ľ��
//������������20����70 <---��ַ�����޸��β�name
//main()�����д�ӡ���Ľ��
//������������20����70<--��ַ�����޸ĵ�nameӰ�쵽ʵ��
//
//*/