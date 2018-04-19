//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//private:
//	int a;
//
//public:
//	c_stu(int x)
//	{
//		a = x;
//	}
//
//	friend ostream& operator << (ostream & ost, c_stu & stu1);
//};
//
//
////1、该运算符重载不能放在类内 因为类内重载的第一个参数是this指针
////2、返回值是ostream类型的引用主要是可以连续输出
//ostream& operator << (ostream & ost, c_stu & stu1)
//{
//	cout << stu1.a;
//	return ost;
//}
//
//int main()
//{
//	c_stu stu1(23);
//
//	cout << stu1 << "  cout << sut1: " << endl;
//
//
//
//	system("pause");
//	return 0;
//}