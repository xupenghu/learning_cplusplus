//#include <iostream>
//
//using namespace std;
//
//
//
//
//class CStu
//{
//public :
//	int x;
//	int b;
//	int c;
//
//	//thisָ�벻����ĳ�Ա
//	//thisָ������ĳ�Ա������һ������ 
//	//thisָ���ڶ��󴴽���ʱ����С�
//	//thiszָ��ֻ���ڳ�Ա�����вſ���ʹ��
//
//	void show()
//	{
//		cout << x << endl;
//		cout << b << endl;
//		cout << c << endl;
//	}
//
//	//���캯�� ���ڳ�Ա�����ĳ�ʼ��
//	CStu(int x , int y , int z):x(1),b(2),c(3)
//	{
//		x = x;      //x ���������ǵ�ǰ���� ���Ա����ʵ��ִ��û������
//		b = y;
//		c = z;
//		this->x = x;  // this �������� CStu *
//	}
//
//	//this ָ�볣���ڻ�ȡ�����ĵ�ַ
//	CStu *get_addr()
//	{
//		return this;  
//	}
//
//	//�������������
//
//	CStu get_addr1()
//	{
//		return *this; 
//	}
//
//	//�������� �û���Ա�������ڴ���� û�в���
//	~CStu()
//	{
//	
//	}
//
//};
//
//
//
//int main()
//{
//
//	CStu stu1(2,3,4);
//
//	CStu stu2(2,3,5);
//	stu2 = stu1.get_addr1();
//
//	stu2.x = 12;
//
//	//(stu1.get_addr1())->x = 122;
//
//	CStu *p;
//	p = stu1.get_addr();
//
//	cout << p << endl;
//	system("pause");
//	return 0;
//}
