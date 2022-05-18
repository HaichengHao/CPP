//////值传递，函数内部的形参不会影响主函数的实参
////#include<stdio.h>
////void swap(int x, int y) {
////
////	int temp = x;
////	 x = y;
////	 y = temp;
////	printf("函数内部\n");
////	printf("交换前 x = %d , y = %d\n", x, y);
////	printf("交换后 x = %d , y = %d\n", x, y);
////
////}
////void main() {
////	int x = 4;
////	int y = 3;
////	printf("\n函数外部\n");
////	printf("交换前 x = %d , y = %d\n", x, y);
////	swap(x, y);
////	printf("交换后 x = %d , y = %d\n", x, y);
////
////}
//
//
////地址传递
//#include<stdio.h>
//int swap(int* x, int* y) {
//	int  temp = *x;
//	*x = *y;
//	*y = temp;
//	return 0;
//}
//int main() {
//	int x = 9;
//	int y = 8;
//	swap(&x, &y);
//	printf("x = %d , y = %d", x, y);
//}