//#include <iostream>
//
//using namespace std;
//
//
//
//
//class CStu
//{
//public :
//	int x;
//	int b;
//	int c;
//
//	//this指针不是类的成员
//	//this指针是类的成员函数的一个参数 
//	//this指针在对象创建的时候才有。
//	//thisz指针只能在成员函数中才可以使用
//
//	void show()
//	{
//		cout << x << endl;
//		cout << b << endl;
//		cout << c << endl;
//	}
//
//	//构造函数 用于成员变量的初始化
//	CStu(int x , int y , int z):x(1),b(2),c(3)
//	{
//		x = x;      //x 的作用域是当前函数 所以本语句实际执行没有意义
//		b = y;
//		c = z;
//		this->x = x;  // this 的类型是 CStu *
//	}
//
//	//this 指针常用于获取这个类的地址
//	CStu *get_addr()
//	{
//		return this;  
//	}
//
//	//返回这个对象本身
//
//	CStu get_addr1()
//	{
//		return *this; 
//	}
//
//	//析构函数 用户成员变量的内存回收 没有参数
//	~CStu()
//	{
//	
//	}
//
//};
//
//
//
//int main()
//{
//
//	CStu stu1(2,3,4);
//
//	CStu stu2(2,3,5);
//	stu2 = stu1.get_addr1();
//
//	stu2.x = 12;
//
//	//(stu1.get_addr1())->x = 122;
//
//	CStu *p;
//	p = stu1.get_addr();
//
//	cout << p << endl;
//	system("pause");
//	return 0;
//}
