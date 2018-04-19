//#include <iostream>
//
//using namespace std;
////连编：就是将模块或者函数合并在一起生成可执行代码的处理过程
//连编是编译器的一个处理过程 编写程序本身不需要过多关注
//class c_father
//{
//public:
//	int a;
//	char name[20];
//
//	virtual void fun()
//	{
//		cout << "i am in class c_father!" << endl;
//	
//	}
//
//
//	c_father()
//	{
//		a = 100;
//	}
//
//
//};
//
//
//class c_son: public c_father
//{
//public :
//	int a;
//
//	virtual void fun()
//	{
//		cout << "i am in class c_son" << endl;
//	
//	}
//
//
//
//};
//
//int main()
//{
//	c_father * fa; //多态 父类的指针 调用子类的函数
////	fa->fun();  //有唯一确定的调用关系时，就是静态连编
//
//	int b;
//
//	cin >> b;
//
//	switch (b)
//	{
//	case 1:
//		fa = new c_son;
//		break;
//	case 2:
//		fa = new c_father;
//		break;
//
//	default : 
//		fa = new c_father;
//		break;
//		
//
//	}
//
//	fa->fun(); //对于不确定的调用关系就叫做动态连编 动态连编时针对C++的多态的 C语言都是静态连编
//
//
//	system("pause");
//	return 0;
//}