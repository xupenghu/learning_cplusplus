//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//class c_father
//{
//public:
//	int a;
//	int b;
//
//	c_father()
//	{
//		a = 100;
//		b = 200;
//	}
//
//
//};
//
//
//void func(int a)
//{
//	if (0 == a)
//	{	
//		abort(); //异常处理函数 在stdlib中
//	}
//	else
//	{
//		cout << "a = " << a << endl;
//	}
//
//}
//
//void func1(int x)
//{
//	while (x < 10)
//	{
//		x++;
//		if (9 == x)
//			throw x;
//	}
//}
//
//void func2(c_father & fa1)
//{
//	while (fa1.b > fa1.a)
//	{
//		fa1.a++;
//		if (150 == fa1.a)
//			throw fa1;
//	}
//}
//
//int main()
//{
//	/*int x;
//	cout << "please in a number end with space " << endl;
//	cin >> x;
//	func(x);*/
//	c_father fa;
//
//	
//	try
//	{
//	
//		//func1(2);
//		func2(fa);  //只能try一个函数 
//	}
//	catch (int a)
//	{
//		cout << a << endl;
//	}
//	catch (c_father& fa2)
//	{
//		cout << "fa..." << endl;
//
//	}
//	catch (...)
//	{
//		cout << "default prosess" << endl;
//	}
//
//	system("pause");
//	return 0;
//}