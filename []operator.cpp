//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//public:
//	int a;
//	int b;
//	int c;
//	double d;
//	int err;
//
//	c_stu()
//	{
//		a = 1;
//		b = 2;
//		c = 3;
//		d = 1.11;
//		err = -1;
//	
//	}
//
//	int & operator[](int n)  //����д��void * operator[](int n) ���ص�ַ �����Ͳ�����������
//	{
//		switch (n)
//		{
//		case 0:
//			return this->a;
//		case 1:
//			return this->b;
//		case 2:
//			return this->c;
//		default:
//			return err;
//
//		}
//	}
//
//};
//
//int main()
//{
//	c_stu stu1;
//
//	cout << stu1.a << endl;
//	stu1.a = 100;
//	cout << stu1.a << endl;
//
//
//	system("pause");
//	return 0;
//}