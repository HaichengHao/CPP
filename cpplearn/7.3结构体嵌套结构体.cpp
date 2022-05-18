////结构体嵌套结构体，结构体里运用另一个结构体来作为自己的成员
//
//#include<iostream>
//using namespace std;
//struct Student {
//	string name;
//	int age;
//	int score;
//};
//struct Teacher {
//	int id;
//	int age;
//	struct Student stu ;
//};
//
//
//int main() {
//	//struct Student stu;
//	struct Teacher tec;
//	tec.id = 122;
//	tec.age = 32;
//	tec.stu.age = 10;
//	tec.stu.name = "wong";
//	tec.stu.score = 66;
//	
//
//	cout << "老师的编号" << tec.id << "老师的年龄" << tec.age << "老师的学生" << tec.stu.name
//		<< "学生的分数" << tec.stu.score << "学生的年龄" << tec.stu.age << endl;
//}