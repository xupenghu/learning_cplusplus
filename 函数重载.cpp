//#include <iostream>
//
//using namespace std;
//
////�������ؼ���ע���
////1����������������� (int a ,char b )�� (char b, int a )����������ͬ�����غ���
////2���������ؿ��Լ򻯵���
////3���������ص�ʱ����������ǲ�ͬ�ģ�ֻҪ��������ͬ�ͺ��ˣ�����ֵ��������Ϊ�������ص�������
////4��VS������Ĭ�ϸ�������double 
////5�����غ����ķ���ֵ���Բ�һ����
////6�����غ����п��Լ������ñ����������������壬ע�⣺���ǵݹ�����Լ���
//
//
//int func(int a , char c )
//{
//	cout << "���ǵ�һ��function" << endl;
//	cout << a << c << endl;
//	return 0;
//}
//
//int func(float x )
//{
//	cout << "���ǵ�2��function" << endl;
//	cout << x << endl;
//	return 0;
//}
//
//int func(float f , char c ,int x )
//{
//	cout << "���ǵ�3��function" << endl;
//	cout << f << c << x << endl;
//	return 0;
//}
//
//float func(float f , int x ,char c)
//{
//	cout << "���ǵ�4��function" << endl;
//	cout << f << x << c << endl;
//	return 0;
//}
//
//int func(int x)
//{
//	cout << "���ǵ�5��function" << endl;
//	//func(12); //���󣬲��ܵݹ�����Լ�
//	func(12.3f); //��ȷ ������������
//	cout << x << endl;
//	return 0;
//}
//
//int main()                                                            
//{
//
//	func(23, 'b');
//	func(12.3f);
//	func(12.3, 'b', 12);
//	func(12.3, 23, 'x');
//	func(88);
//	system("pause");
//	return 0;
//}