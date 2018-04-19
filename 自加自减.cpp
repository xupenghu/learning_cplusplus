//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//public :
//	int a;
//	int b;
//
//	c_stu()
//	{
//		a = 100;
//		b = 200;
//	}
//
//	int & operator ++()
//	{
//		return ++this->a;
//	}
//	int & operator --()
//	{
//		return --this->a;
//	}
//	//有 参数的就是 a++ 没参数就是 --a;
//	int & operator ++(int n)
//	{
//		n = this->a++;
//		return n;
//	}
//	int & operator --(int n)
//	{
//		n = this->a--;
//		return n;
//	}
//
//};
//
////int & operator ++(c_stu & stu1)
////{
////
////	return ++stu1.a ;
////}
////
////int & operator --(c_stu & stu1)
////{
////	return --stu1.a;
////}
//
////int & operator ++(c_stu & stu1, int n)
////{
////	n = stu1.a;
////	stu1.a += 1;
////	return n;
////}
////int & operator --(c_stu & stu1, int n)
////{
////	n = stu1.a;
////	stu1.a -= 1;
////	return n;
////}
//
//int main()
//{
//	c_stu stu1;
//
//	cout << ++stu1 << endl;
//	cout << --stu1 << endl;
//
//	cout << stu1++ << endl;
//	cout << stu1-- << endl;
//
//	cout << stu1.a << endl;
//
//
//	system("pause");
//	return 0;
//}