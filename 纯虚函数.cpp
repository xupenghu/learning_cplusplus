//#include <iostream>
//
//using namespace std;
//
////有纯虚函数的类就是抽象类
//class c_father
//{
//public:
//	int a;
//	//纯虚函数的特点：
//	//1、可以没有函数实现
//	//2、继承这个类的子类必须重写它，才可以定义对象。
//	//3、全部都是纯虚函数的类叫做接口类。
//	//4、虚函数不可以实例化，必须有子类继承它，然后重写他的虚函数才可以使用。
//	virtual void fun()=0;
//	virtual int fun1(int x, int y) = 0;
//	virtual ~c_father()
//	{
//	
//	}
//};
//
//class c_son : public c_father
//{
//public:
//	int x;
//
//	void fun()
//	{
//
//	}
//	int fun1(int x, int y)
//	{
//		cout << x << " " << y << endl;
//		return 0;
//	}
//
//};
//
//int main()
//{
//	c_son fa;
//
//	system("pause");
//	return 0;
//}