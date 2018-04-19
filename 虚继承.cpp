//#include <iostream>
//
//using namespace std;
//
////
//class c_father
//{
//public:
//	int a;
//
//
//};
//
//class c_son1 : virtual public c_father
//{
//public:
//
//
//
//};
//
//
////虚继承是多继承中特有的概念，虚基类是为了解决多重继承而出现的
////父类叫做虚基类
////解决多重继承中访问不明确的问题，其实虚继承只是继承了使用权而没有复制一份
////虚继承在编程中不建议使用，结构复杂，内存开销大。
//class c_son2 : virtual public c_father
//{
//public:
//
//
//
//};
//
//class c_son_son : public c_son1, public c_son2
//{
//	int c;
//
//
//};
//
//int main()
//{
//	c_son_son son;
//	son.a;
//	system("pause");
//	return 0;
//}