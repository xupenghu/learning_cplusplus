//#include <iostream>
//
//using namespace std;
//
////单例：一个对象只能实例化一次
////实现单例的四个步骤
////1、构造函数必须是private或者protect 不能再类外申明和实例化
////2、通过静态成员函数申请对象空间，并返回地址
////3、使用一个静态成员变量做数量控制
////4、在析构函数中，将对象清空，以达到重复申请的目的
//
//class c_father
//{
//private :
//	c_father()
//	{
//		
//	}
//
//
//public:
//	static int count;
//	static c_father * creat_dl()
//	{
//		if (count)
//		{
//			count = 0;
//			return (new c_father);
//		}
//		else
//			return NULL;	
//	}
//
//	~c_father()
//	{
//		count = 1;
//	}
//
//
//
//};
//
//int c_father::count = 1;
//
//int main()
//{
//	c_father * fa = c_father::creat_dl(); //通过静态成员函数申请对象空间，并返回地址
//	delete fa;
//	c_father * fa1 = c_father::creat_dl();
//	if (NULL == fa1)
//	{
//		cout << "申请对象失败！" << endl;
//	}
//
//	system("pause");
//	return 0;
//}







