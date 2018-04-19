//#include <iostream>
//using namespace std;
//
//int func(int a )
//{
//	cout << "i am in func	: a =  " << a << endl;
//	return a;
//}
//
//int func1(int & a)
//{
//	cout << "i am in func1	: a =  " << a << endl;
//	return a;
//}
//
//int func2(int *a)
//{
//
//	cout << "i am in func1	: *a =  " << *a << endl;
//	return *a;
//}
//
//void func3(char(&a)[100])
//{
//	cout << "i am in func3	: a =  " << a << endl;
//}
//
//void func4(char *a)
//{
//	cout << "i am in func4	: a =  " << a << endl;
//}
//
//
//int main()
//{
//	cout << "引用做参数的例子\n";
//	int b;
//	b = 199;
//	func(b);
//	func1(b);
//	func2(&b);
//
//	char name[100] = "hello world !";
//
//	func3(name);
//	func4(name);
//	// 总结：引用的作用和指针差不多 但是引用用起来比指针要方便一点。引用定义的时候必须要初始化，这就避免了指针中的野指针问题。但是总体感觉引用没有指针功能强大。
//
//
//	system("pause");
//	return 0;
//}
