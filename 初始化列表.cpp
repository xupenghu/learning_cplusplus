//#include <iostream>
//
//using namespace std;
//
//class CStu
//{
//public:
//	int age;
//	char *name = { "xiao ming !" };
//	float f;
//	int &a;
//
//
//
//	CStu(int b):a(b)     //���캯��
//	{
//		age = 18;
//		name = "da pang";
//
//	}
//	//��ʼ���б��˳��Ӱ���Ա�����ĳ�ʼ����
//	//��Ա�����ĳ�ʼ��˳��ֻ�ͳ�Ա�����˳���й�ϵ
//	//����ʹ�ó�Ա�໥֮����г�ʼ��������Ҫע���Ա���������˳�򣡣�����
//	//���ú�const����Ҫ��ʼ��
//	CStu(int a, float f1) :age(10), name("er gou"), f(12.123f),a(a)
//	{
//		age = a;
//		f = f1;
//	}
//	CStu(int x , char *na) :age(), f(),a(x)
//	{
//		a = x;
//
//	}
//
//	void show()
//	{
//		cout << age << '\n';
//		cout << name << '\n';
//		cout << f << '\n';
//	}
//
//};
//
//
//int main()
//{
//	//int a;
//	//int &b =a;
//
//
//	CStu stu(20,12.111f);
//
//	stu.show();
//
//	system("pause");
//	return 0;
//}