//#include <iostream>
//
//using namespace std;
//
////�д��麯��������ǳ�����
//class c_father
//{
//public:
//	int a;
//	//���麯�����ص㣺
//	//1������û�к���ʵ��
//	//2���̳����������������д�����ſ��Զ������
//	//3��ȫ�����Ǵ��麯����������ӿ��ࡣ
//	//4���麯��������ʵ����������������̳�����Ȼ����д�����麯���ſ���ʹ�á�
//	virtual void fun()=0;
//	virtual int fun1(int x, int y) = 0;
//	virtual ~c_father()
//	{
//	
//	}
//};
//
//class c_son : public c_father
//{
//public:
//	int x;
//
//	void fun()
//	{
//
//	}
//	int fun1(int x, int y)
//	{
//		cout << x << " " << y << endl;
//		return 0;
//	}
//
//};
//
//int main()
//{
//	c_son fa;
//
//	system("pause");
//	return 0;
//}