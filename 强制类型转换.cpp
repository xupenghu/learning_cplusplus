//#include <iostream>
//using namespace std;
//
//
////1、强制类型转换的运算符重载函数只能写在类内
////2、强制类型转换推荐使用 (int)a 当然，这种写法也是可以的 int(a)
//class c_stu
//{
//public:
//	int a;
//	double d;
//
//	c_stu()
//	{
//		a = 100;
//		d = 10000.223234567;
//
//	}
//
//	operator int()
//	{
//		return (int)d;	
//	}
//
//	operator double()
//	{
//		return (double)d;
//	}
//
//};
//
//
//int main()
//{
//	c_stu stu1;
//
//	cout << (int)stu1 << endl;
//	cout << (double)stu1 << endl;
//
//
//	system("pause");
//	return 0;
//}