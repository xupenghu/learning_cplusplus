//#include <iostream>
//
//using namespace std;
//
//class CStu
//{
//	//作用域运算符 有public pravite protected三种
//public :
//	int a;
//	int b;
//	int c;
//
//
//	//构造函数 初始化成员变量 不能是常函数
//	CStu()
//	{
//		a = 100;
//	}
//
//	//析构函数 释放资源 不能是常函数
//	~CStu()
//	{
//	
//	}
//
//	//常函数 不能修改类内成员 只能使用类内成员
//	//常函数主要用来做类型限定
//	void show() const
//	{
//		//a = 12; //错的
//		int b;
//		b = a + 3;
//		cout << b << endl;
//		cout << "i am show()" << endl;
//	
//	}
//	void func() 
//	{
//		cout << "i am func()" << endl;
//
//	}
//
//
//};
//
//int main()
//{
//	//如果这个类被const修饰 那么只能调用类内常函数 常对象
//	const CStu stu1;  // sut1 是 const CStu类型的对象
//	stu1.show();  // 可以调用
//	//stu1.func(); //不可调用，类型不匹配
//
//
//	system("pause");
//	return 0;
//}