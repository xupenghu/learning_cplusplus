//#include <iostream>
//using namespace std;
//
//
//class CPeople
//{
//private :    //˽�е� ���ڿɼ�
//	int a = 10;
//	char *name = {"hello world !"};
//
//public :   //������ ȫ���ڶ�����
//	int func()
//	{
//		cout << "public a = " << a << endl;
//		return 0;
//	}
//
//protected:  //���ں�����ɼ� ����
//	int func1()
//	{
//		cout << "int protected : "  << endl;
//		return 0;
//	
//	}
//
//};
//
//class CXiaoming: public CPeople
//{
//	void func4()
//	{
//		func1();
//	}
//
//
//};
//
//int func2()
//{
//	CPeople op;
//	op.func();
////	op.func1();	//����Ҳ�����Ե��� private��
//
//	return 0;
//}
//
//int main()
//{
//	CPeople op;
//	op.func();
////	op.func1();  //private ���Բ��ܱ����⼰�����������
//
//
//	system("pause");
//	return 0;
//}