//#include <iostream>
//using namespace std;
////类内和类外都可以完成运算符重载。
////类内运算符重载默认的第一个参数是this指针
//
//
//class c_stu 
//{
//public:
//	int a;
//	int b;
//
//	c_stu(int x ,int y)
//	{
//		a = x;
//		b = y;
//	}
//	//类内运算符重载
//	int operator >=(c_stu &stu1)
//	{
//		return (this->a >= stu1.a);
//	}
//	int operator &&(c_stu &stu1)
//	{
//		return (this->a && stu1.a);
//	}
//
//
//
//};
////类外运算符重载
//int operator > (c_stu & stu1, c_stu & stu2)
//{
//	return (stu1.a > stu2.a);
//}
//
//
//int operator < (c_stu & stu1, c_stu & stu2)
//{
//	return (stu1.a < stu2.a);
//}
//
//int main()
//{
//	c_stu stu1(1,2);
//	c_stu stu2(3,4);
//
//	cout << (stu1 > stu2) << endl;
//	cout << (stu2 > stu1) << endl;
//	cout << (stu1 >= stu2) << endl;
//	cout << (stu1 && stu2) << endl;
//
//	system("pause");
//	return 0;
//}