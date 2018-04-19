//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//public:
//	int a;
//	char c;
//
//	//构造函数
//	c_stu()
//	{
//		a = 10;
//		c = 'x';
//	
//	}
//
//	//拷贝构造函数  本质还是构造函数
//	//默认的拷贝构造函数其实是拷贝了类内的成员变量，又被称为浅拷贝。
//	//c_stu(const c_stu & sxd)
//	//{
//	//	cout << "i am in 拷贝构造函数中" << endl;
//	//	int  a = 10;
//	//}
//
//	//析构函数
//	~c_stu()
//	{
//	
//	}
//
//};
//
////调用拷贝构造函数
//void func(c_stu stu3)
//{
//
//
//}
//
////调用拷贝构造函数
//c_stu func()
//{
//	c_stu stu4;
//	stu4.a = 100;
//	int a = 10;
//	return stu4;
//
//}
//
//
//int main()
//{
//	c_stu stu1;
//	//何时调用拷贝构造函数 以下四种情况都会调用
//	//c_stu stu2 = stu1;
//	//c_stu stu2(stu1);
//	//c_stu * sut2 = new c_stu(stu1);
//	//c_stu stu2 = c_stu(stu1);
//	//func(stu1);
//	//c_stu stu2 = func(); //测试没有调用拷贝构造函数
//
//
//
//
//
//
//	system("pause");
//	return 0;
//}