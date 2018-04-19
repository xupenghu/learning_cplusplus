//#include <iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	float f;
//	double d;
//
//	CStu()
//	{
//		a = 132;
//		f = 12.12f;
//		d = 132.334;
//
//	}
//
//};
////运算符重载
////1、运算符重载的参数列表里必须有个参数是类
////2、多个运算符重载函数相互构成重载
////3、运算符重载函数传递的需时类的引用
////4、有返回值的重载主要是可以做连续运算
//int operator+(CStu &stu, int a)
//{
//	stu.a = stu.a + a;
//	cout << stu.a << endl;
//	return stu.a;
//}
//int operator+(CStu &stu1, CStu & stu2)
//{
//	stu1.a = stu1.a + stu2.a;
//	cout << stu1.a << endl;
//	return stu1.a;
//}
//
//int main()
//{
//	CStu stu1, stu2;
//
//	stu1 + stu2;
//
//
//	system("pause");
//	return 0;
//}