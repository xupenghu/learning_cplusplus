//#include <iostream>
//using namespace std;
///*
//����ģ��ļ����ص㣺
//	1��������ֻ�������������Ĵ������Ч��
//	2��дtypename��class��Ч����һ���ģ�����ϰ���ϻ���ʹ��typename
//	3���ҵ������typename���������Զ�ƥ�����ͣ���������ʵ�ʵ��õ�ʱ����ݴ��ε��������Զ�ƥ������
//	4��ʹ�ú���ģ����Լ򻯺������صı�̣����ǿ���ʹ��һ�����������㶨��
//
//*/
//
//struct Node
//{
//	int a;
//	double d;
//};
//
//template <typename T>
//void fun(T t)
//{
//	cout << "i am learning template! \n";
//	cout << "t = " << t << endl;
//}
//
//template<> void fun<int>(int  no)
//{
//	cout << no << endl;
//}
////����ģ����廯 ���β���������
//template<> void fun<Node>(Node no)
//{
//	cout << no.a << endl;
//}
////ԭ�溯��  ����˳���ǣ�ԭ�溯��>����ģ����廯>����ģ��
//void fun(int x)
//{
//	cout << "x = " << x << endl;
//}
//
//int main()
//{
//	Node no = {111,11.11};
//	fun(no);
////	fun("hello world!" , 12.2231);
//	system("pause");
//	return 0;
//}