//#include <iostream>
//using namespace std;
//
//class c_grandfather
//{
//public:
//	int a;
//public:
//	c_grandfather(int m)
//	{
//		cout << "c_grandfather   " << m << endl;
//	
//	}
//	c_grandfather()
//	{
//
//
//	}
//
//};
//
//
//class c_father : public c_grandfather
//{
//public :
//	c_father(int a):c_grandfather(a+100)
//	{
//		cout << "c_father " << a << endl;
//	
//	}
//	c_father()
//	{
//		cout << "no canshu c_father" << endl;
//	}
//
//};
//
//class c_son : public c_father
//{
//public :
//	//���๹�캯���в�������Ҫ�����ʼ���б������ݲ���
//	//�������๹�캯�����صģ����ݴ�����ѡ������ĸ�
//	c_son(int x, int y) : c_father(x+y)
//	{
//		cout << "c_son" << "  " << x << "   " << y << endl;
//	
//	}
//
//};
//
//
//
//int main()
//{
//	c_son son(1,3);
//	c_grandfather gd;
//	system("pause");
//	return 0;
//}