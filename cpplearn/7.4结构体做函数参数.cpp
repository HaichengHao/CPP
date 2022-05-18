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
////值传递，值传递的形参不影响实参
//void printstudent(Student stu) {
//	stu.age = 100;
//	cout << "值传递函数中打印出的结果\n" << "姓名" << stu.name << "年龄" << stu.age << "分数" << stu.score << endl;
//}
////地址传递，地址传递的形参影响实参
//void printstudent2(struct Student *p) {
//	p->name = "张武";
//	cout << "地址传递函数中打印出的结果\n" << "姓名" <<p->name << "年龄" << p->age << "分数" << p->score << endl;
//}
//
//int main() {
//	struct Student stu;
//	stu.name = "张三";
//	stu.age = 20;
//	stu.score = 70;
//	
//	//值传递
//	printstudent(stu);//将结构体变量作为函数的参数
//	
//	//地址传递
//	printstudent2(&stu);
//	cout << "main()函数中打印出的结果\n" << "姓名" << stu.name << "年龄" << stu.age << "分数" << stu.score << endl;
//
//}
///*
//值传递函数中打印出的结果
//姓名张三年龄100分数70 <--- 值传递形参的修改不会影响实参
//地址传递函数中打印出的结果
//姓名张武年龄20分数70 <---地址传递修改形参name
//main()函数中打印出的结果
//姓名张武年龄20分数70<--地址传递修改的name影响到实参
//
//*/