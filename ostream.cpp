//#include <iostream>
//using namespace std;
//
//class c_stu
//{
//private:
//	int a;
//
//public:
//	c_stu(int x)
//	{
//		a = x;
//	}
//
//	friend ostream& operator << (ostream & ost, c_stu & stu1);
//};
//
//
////1������������ز��ܷ������� ��Ϊ�������صĵ�һ��������thisָ��
////2������ֵ��ostream���͵�������Ҫ�ǿ����������
//ostream& operator << (ostream & ost, c_stu & stu1)
//{
//	cout << stu1.a;
//	return ost;
//}
//
//int main()
//{
//	c_stu stu1(23);
//
//	cout << stu1 << "  cout << sut1: " << endl;
//
//
//
//	system("pause");
//	return 0;
//}