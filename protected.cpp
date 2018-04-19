//#include <iostream>
//using namespace std;
//
//
//class CPeople
//{
//private :    //私有的 类内可见
//	int a = 10;
//	char *name = {"hello world !"};
//
//public :   //公开的 全局内都可用
//	int func()
//	{
//		cout << "public a = " << a << endl;
//		return 0;
//	}
//
//protected:  //类内和子类可见 可用
//	int func1()
//	{
//		cout << "int protected : "  << endl;
//		return 0;
//	
//	}
//
//};
//
//class CXiaoming: public CPeople
//{
//	void func4()
//	{
//		func1();
//	}
//
//
//};
//
//int func2()
//{
//	CPeople op;
//	op.func();
////	op.func1();	//函数也不可以调用 private类
//
//	return 0;
//}
//
//int main()
//{
//	CPeople op;
//	op.func();
////	op.func1();  //private 属性不能被类外及其他子类调用
//
//
//	system("pause");
//	return 0;
//}