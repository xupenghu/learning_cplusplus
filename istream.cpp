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
////�����������������
//istream& operator >> (istream & ist, c_stu & stu1)
//{
//	ist >> stu1.a;
//	ist >> stu1.c;
//	if (ist.fail())
//	{
//		//�������Ͳ�ƥ��ʱ���õĺ�������
//		cout << "�������Ͳ�ƥ��!" << endl;
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