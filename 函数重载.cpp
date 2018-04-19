//#include <iostream>
//
//using namespace std;
//
////函数重载几个注意点
////1、传入的两个参数如 (int a ,char b )和 (char b, int a )都算两个不同的重载函数
////2、函数重载可以简化调用
////3、函数重载的时候函数体可以是不同的，只要函数名不同就好了，返回值不可以作为函数重载的条件。
////4、VS编译器默认浮点数是double 
////5、重载函数的返回值可以不一样。
////6、重载函数中可以继续调用本函数的其他函数体，注意：能是递归调用自己。
//
//
//int func(int a , char c )
//{
//	cout << "我是第一个function" << endl;
//	cout << a << c << endl;
//	return 0;
//}
//
//int func(float x )
//{
//	cout << "我是第2个function" << endl;
//	cout << x << endl;
//	return 0;
//}
//
//int func(float f , char c ,int x )
//{
//	cout << "我是第3个function" << endl;
//	cout << f << c << x << endl;
//	return 0;
//}
//
//float func(float f , int x ,char c)
//{
//	cout << "我是第4个function" << endl;
//	cout << f << x << c << endl;
//	return 0;
//}
//
//int func(int x)
//{
//	cout << "我是第5个function" << endl;
//	//func(12); //错误，不能递归调用自己
//	func(12.3f); //正确 可以正常调用
//	cout << x << endl;
//	return 0;
//}
//
//int main()                                                            
//{
//
//	func(23, 'b');
//	func(12.3f);
//	func(12.3, 'b', 12);
//	func(12.3, 23, 'x');
//	func(88);
//	system("pause");
//	return 0;
//}