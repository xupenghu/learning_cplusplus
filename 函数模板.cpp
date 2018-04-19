//#include <iostream>
//using namespace std;
///*
//函数模板的几个特点：
//	1、作用域：只对它定义的下面的代码段有效。
//	2、写typename和class的效果是一样的，但是习惯上还是使用typename
//	3、我的理解是typename的作用是自动匹配类型，当函数在实际调用的时候根据传参的类型来自动匹配类型
//	4、使用函数模板可以简化函数重载的编程，我们可以使用一个函数体来搞定。
//
//*/
//
//struct Node
//{
//	int a;
//	double d;
//};
//
//template <typename T>
//void fun(T t)
//{
//	cout << "i am learning template! \n";
//	cout << "t = " << t << endl;
//}
//
//template<> void fun<int>(int  no)
//{
//	cout << no << endl;
//}
////函数模板具体化 传参不能是引用
//template<> void fun<Node>(Node no)
//{
//	cout << no.a << endl;
//}
////原版函数  调用顺序是：原版函数>函数模板具体化>函数模板
//void fun(int x)
//{
//	cout << "x = " << x << endl;
//}
//
//int main()
//{
//	Node no = {111,11.11};
//	fun(no);
////	fun("hello world!" , 12.2231);
//	system("pause");
//	return 0;
//}