//#include <iostream>
//using namespace std;
//
////继承的构造函数调用规则：先调用父类的构造函数 再调用子类的构造函数。
//
//class c_people
//{
//public :
//	int a;
//	c_people()
//	{
//		cout << "c_people " << endl;
//	}
//
//
//};
//
//class c_man : public c_people
//{
//public :
//	c_man()
//	{
//		cout << "c_man" << endl;
//	}
//
//
//};
//
//class c_child : public c_man
//{
//public :
//	c_child()
//	{
//		cout << "c_child" << endl;
//	}
//
//
//};
//
//
//
//
//
//int main()
//{
//	c_child child;
//
//
//	system("pause");
//	return 0;
//}