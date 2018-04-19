//#include <iostream>
//using namespace std;
//
//
//
//class c_stu
//{
//public:
//	int a;
//	void func1()
//	{
//		cout << "类内定义的函数都是内敛函数！" << endl;
//	
//	}
//
//	void func2();
//
//};
//
//void c_stu::func2()
//{
//	cout << "类外定义的函数需要加上inline关键字才可以是内敛函数。" << endl;
//	cout << "默认定义的类外的函数不是内敛函数。！" << endl;
//
//}
//
//
////内联函数的关键字是inline 
////内敛函数的的特点是编译器编译到内联函数的时候会原地展开，
////这样就不会执行函数的跳转等，提高函数执行的效率，缺点是占内存，调用多少次就需要原地展开多少次。
//
//inline void func(int a)
//{
//	cout << a*a << endl;
//
//}
//
//
//int main()
//{
//	c_stu stu1;
//	stu1.func2();
//
//
//	system("pause");
//	return 0;
//}