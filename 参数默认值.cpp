//#include <iostream>
//using namespace std;
//
//
////可以全部指定缺省值。
//int func(int a = 12, char c = 'x' , float f = 12.3)
//{
//	cout << a << " " << c << " " << f << endl;
//	return a;
//}
//
//
////部分指定时，必须要从右到做指定
//int func2(int a , char c = 'x', float f = 12.3)
//{
//	cout << a << " " << c << " " << f << endl;
//	return a;
//}
//
//
//int main()
//{
//	//全部指定时，实参可以是缺省值
//	func();
//	//当有实参传入时，以实参为准
//	func(23,'b',111.244);
//
//	//为什么从右到左写呢？就是为了传参的时候必须要传的参数可以被传进去。
//	func2(10);
//
//
//
//	system("pause");
//	return 0;
//}