//#include <iostream>
//
//using namespace std;
//
//class CStu
//{
//public:
//	int age;
//	char *name = { "xiao ming !" };
//	float f;
//	int &a;
//
//
//
//	CStu(int b):a(b)     //构造函数
//	{
//		age = 18;
//		name = "da pang";
//
//	}
//	//初始化列表的顺序不影响成员变量的初始化，
//	//成员变量的初始化顺序只和成员定义的顺序有关系
//	//可以使用成员相互之间进行初始化，但是要注意成员变量定义的顺序！！！！
//	//引用和const必须要初始化
//	CStu(int a, float f1) :age(10), name("er gou"), f(12.123f),a(a)
//	{
//		age = a;
//		f = f1;
//	}
//	CStu(int x , char *na) :age(), f(),a(x)
//	{
//		a = x;
//
//	}
//
//	void show()
//	{
//		cout << age << '\n';
//		cout << name << '\n';
//		cout << f << '\n';
//	}
//
//};
//
//
//int main()
//{
//	//int a;
//	//int &b =a;
//
//
//	CStu stu(20,12.111f);
//
//	stu.show();
//
//	system("pause");
//	return 0;
//}