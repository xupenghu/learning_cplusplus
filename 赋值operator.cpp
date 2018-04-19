//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//private :
//	int a;
//	double d;
//
//
//public :
//	c_stu()
//	{
//		a = 0;
//		d = 0.0;
//	
//	}
//
//	//赋值运算符的重载一般都放在类内
//	int operator =(int x)
//	{
//		this->a = x;
//
//		return this->a;
//	
//	}
//
//	int operator +=(int x)
//	{
//		this->a += x;
//
//		return this->a;
//
//	}
//	int operator +=(c_stu& stu1)
//	{
//		this->a += stu1.a;
//
//		return this->a;
//
//	}
//
//	void show()
//	{
//		cout << this->a << endl;
//		
//	}
//
//
//};
//
//int main()
//{
//	c_stu stu1;
//	stu1 = 100;
//	stu1.show();
//
//	stu1 += stu1;
//	stu1.show();
//	
//	system("pause");
//	return 0;
//}