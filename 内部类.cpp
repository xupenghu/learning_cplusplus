//#include <iostream>
//using namespace std;
//
//class c_out
//{
//public:
//	int a;
//
//
//public:
//	class c_in
//	{
//	public :
//		int b;
//		c_out *p;
//		void func2()
//		{
//			cout << p->a << endl;  //内部类想要调用外部类的成员需要通过指针来传递地址来调用
//		}
//		c_in(c_out *p1):p(p1)
//		{
//			b = 100;
//		}
//	};
//
//	c_in in;   //外部类调用内部类，需要在类内申明一个变量。然后再调用
//	void func()
//	{
//		cout << in.b << endl;
//	}
//	c_out() :in(this)  //类c_in在c_out的内部，所以c_out的构造函数就必须要初始化类内带参数的c_in
//	{                  //内部类想要调用外部类的成员，可以通过内部类的构造函数来传递外部类的地址来调用
//
//	}
//
//
//};
//
//
//
//int main()
//{
//	c_out ou;
//	ou.a = 120;
//	ou.in.func2();
//	system("pause");
//	return 0;
//}