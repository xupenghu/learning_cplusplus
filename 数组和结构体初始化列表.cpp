//#include <iostream>
//using namespace std;
//
//struct people
//{
//	int age;
//	float h;
//};
//
//class CStu
//{
//public:
//	int a;
//	float f;
//	int name[20];
//
//
//	people p1;
//
//	CStu(people p2):a(12),f(12.23f),p1(p2)
//	{
//		//常规写法
//		memset(name, 0, sizeof(name));
//
//
//		//结构体的初始化也可以进行赋值操作
//		p1.age = 190;
//		p1.h = 178.23f;
//
//
//		////赋值操作
//		//for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++)
//		//{
//		//	name[i] = 0;
//		//}
//
//	}
//
//	void show()
//	{
//		for (int i = 0; i < 20; i++)
//		{	
//			cout << name[i] << endl;
//		}
//
//		cout << "a = " << a << endl;
//		cout << "f = " << f << endl;
//		cout << "p1.age = " << p1.age << endl;
//		cout << "p1.h = " << p1.h << endl;
//		cout << "sizeof(name) :" << sizeof(name) << endl;
//		cout << "sizeof(name[0]) :" << sizeof(name[0]) << endl;
//	}
//
//};
//
//
//int main()
//{
//	people p3;
//	p3.age = 180;
//	p3.h = 178.3f;
//	CStu stu(p3);
//	stu.show();
//
//
//	system("pause");
//	return 0;
//}
