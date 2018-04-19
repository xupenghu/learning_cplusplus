//#include <iostream>
//using namespace std;
//
//class CStu
//{
//private:
//	int age = 18;
//	char *name = {"xiao ming !"};
//
//private :
//	void func()
//	{
//		cout << "同学的年龄是： " << age << endl;
//		cout << "同学的名字是： " << name << endl;
//	}
//	
//
//public:
//	//我们可以使用public来输出类的接口封装函数，将类内需要交换的变量和方法可以被其他的函数来调用
//	int get_age()
//	{
//		return age;
//	}
//
//	void set_age(int set_age)
//	{
//		age = set_age;
//	}
//
//	char *get_name()
//	{
//		return name;
//	}
//
//	void set_name( char *p)
//	{
//		name = p;
//	}
//
//
//	friend void func1();  //友元函数 在类内申明为友元函数后就可以访问类内的private成员变量和成员函数，但是在一定情况下也破坏了类的封装性。
//
//	friend int main();
//};
//
//
//void func1()
//{
//	CStu stu;
//	stu.func();
//
//}
//
//
//
//int main()
//{
//	CStu stu1;
//	stu1.set_name("da pang!");
//	func1();
//	stu1.func();
//	stu1.set_age(24);
//	cout << stu1.get_age() << endl;
//
//
//	system("pause");
//	return 0;
//}