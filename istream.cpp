//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//private :
//	int a;
//	char c;
//
//public:
//	c_stu()
//	{
//		a = 111;
//		c = 'x';
//	
//	}
//
//	void show()
//	{
//		cout << "stu.a = :" << a << endl;
//		cout << "stu.c = :" << c << endl;
//	
//	}
//
//	friend istream& operator >> (istream & ist, c_stu & stu1);
//};
////必须类外运算符重载
//istream& operator >> (istream & ist, c_stu & stu1)
//{
//	ist >> stu1.a;
//	ist >> stu1.c;
//	if (ist.fail())
//	{
//		//输入类型不匹配时调用的函数处理
//		cout << "输入类型不匹配!" << endl;
//		stu1.a = 0;
//		stu1.c = 0;
//	}
//	return ist;
//
//}
//
//
//int main()
//{
//	c_stu stu1;
//
//	cin >> stu1;
//	stu1.show();
//
//	system("pause");
//	return 0;
//}