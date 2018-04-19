#include <iostream>
using namespace std;

class c_stu
{
public:
	int a;

	//1、静态成员属于类的一个属性，不属于一个对象的属性。
	//2、在编译器编译的时候，他就已经存在。
	//3、静态成员可以作为类创建对象的一个沟通的桥梁。
	static int b;  

	//静态成员函数必须使用静态成员变量
	static void func();

};

//类外初始化
int c_stu::b = 10;

void c_stu::func()
{
	int x = 100;
	int y = 200;
	int z = x + y;
	b = 13;
	cout << "&z = " << &z << endl;
	cout << "&b = " << &b << endl;

}


int main()
{
	//类名作用域可以直接访问静态成员变量和静态成员函数
	cout << c_stu::b << endl;
	 c_stu::func();

	//对象也可以访问
	c_stu stu;
	cout << stu.b << endl;
	stu.func();

	system("pause");
	return 0;
}