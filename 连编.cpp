//#include <iostream>
//
//using namespace std;
////���ࣺ���ǽ�ģ����ߺ����ϲ���һ�����ɿ�ִ�д���Ĵ������
//�����Ǳ�������һ��������� ��д��������Ҫ�����ע
//class c_father
//{
//public:
//	int a;
//	char name[20];
//
//	virtual void fun()
//	{
//		cout << "i am in class c_father!" << endl;
//	
//	}
//
//
//	c_father()
//	{
//		a = 100;
//	}
//
//
//};
//
//
//class c_son: public c_father
//{
//public :
//	int a;
//
//	virtual void fun()
//	{
//		cout << "i am in class c_son" << endl;
//	
//	}
//
//
//
//};
//
//int main()
//{
//	c_father * fa; //��̬ �����ָ�� ��������ĺ���
////	fa->fun();  //��Ψһȷ���ĵ��ù�ϵʱ�����Ǿ�̬����
//
//	int b;
//
//	cin >> b;
//
//	switch (b)
//	{
//	case 1:
//		fa = new c_son;
//		break;
//	case 2:
//		fa = new c_father;
//		break;
//
//	default : 
//		fa = new c_father;
//		break;
//		
//
//	}
//
//	fa->fun(); //���ڲ�ȷ���ĵ��ù�ϵ�ͽ�����̬���� ��̬����ʱ���C++�Ķ�̬�� C���Զ��Ǿ�̬����
//
//
//	system("pause");
//	return 0;
//}