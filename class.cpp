//#include <iostream>
//using namespace std;
//
//
////�ṹ�������һ���ض������
//
//class CPeople
//{
//public :   //�������η� ����ɼ�
//	int a;    //��Ա����  ����
//	int func(int x = 10)  //��Ա����  ����
//	{
//		cout << x << endl;
//		return x;
//	}
//
//};
//
//class CBird
//{
//public:
//	CPeople cp2;
//
//	int x = 30;
//	char *name = new char[100];
//
//	int func2();
//
//
//};
//
//int CBird::func2()
//{
//	int a;
//	a = cp2.func();
//	cout << name << endl;
//	cout << "a = cp2.func()" << endl;
//
//	return 0;
//}
//
//
//int func3()
//{
//	CBird cb3;
//	CPeople cp3;
//
//	//cout << CBird::x << endl; //�Ǿ�̬��Ա���ñ�������ض������
//	cb3.name = "i am in the func3";
//	cb3.func2();
//
//	return 0;
//
//}
//
//
//int main()
//{
//	CPeople cp;
//	CPeople *op1 = new CPeople;
//	CBird cb;
//	char tmp[100] = "0";
//
////	strcpy(tmp,"hello world !");
//
//	cb.name = "i am a pure people !";
//	cb.func2();
//	
//	func3();
//
//	cp.a = 12;
//	cp.func(888);
//
//	op1->a = 133;
//	op1->func();
//
//
//
//	system("pause");
//	return 0;
//}