//#include <iostream>
//using namespace std;
//
//class c_out
//{
//public:
//	int a;
//
//
//public:
//	class c_in
//	{
//	public :
//		int b;
//		c_out *p;
//		void func2()
//		{
//			cout << p->a << endl;  //�ڲ�����Ҫ�����ⲿ��ĳ�Ա��Ҫͨ��ָ�������ݵ�ַ������
//		}
//		c_in(c_out *p1):p(p1)
//		{
//			b = 100;
//		}
//	};
//
//	c_in in;   //�ⲿ������ڲ��࣬��Ҫ����������һ��������Ȼ���ٵ���
//	void func()
//	{
//		cout << in.b << endl;
//	}
//	c_out() :in(this)  //��c_in��c_out���ڲ�������c_out�Ĺ��캯���ͱ���Ҫ��ʼ�����ڴ�������c_in
//	{                  //�ڲ�����Ҫ�����ⲿ��ĳ�Ա������ͨ���ڲ���Ĺ��캯���������ⲿ��ĵ�ַ������
//
//	}
//
//
//};
//
//
//
//int main()
//{
//	c_out ou;
//	ou.a = 120;
//	ou.in.func2();
//	system("pause");
//	return 0;
//}