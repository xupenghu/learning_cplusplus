//#include <iostream>
//using namespace std;
//
//class CStu
//{
//private:
//	int age = 18;
//	char *name = {"xiao ming !"};
//
//private :
//	void func()
//	{
//		cout << "ͬѧ�������ǣ� " << age << endl;
//		cout << "ͬѧ�������ǣ� " << name << endl;
//	}
//	
//
//public:
//	//���ǿ���ʹ��public�������Ľӿڷ�װ��������������Ҫ�����ı����ͷ������Ա������ĺ���������
//	int get_age()
//	{
//		return age;
//	}
//
//	void set_age(int set_age)
//	{
//		age = set_age;
//	}
//
//	char *get_name()
//	{
//		return name;
//	}
//
//	void set_name( char *p)
//	{
//		name = p;
//	}
//
//
//	friend void func1();  //��Ԫ���� ����������Ϊ��Ԫ������Ϳ��Է������ڵ�private��Ա�����ͳ�Ա������������һ�������Ҳ�ƻ�����ķ�װ�ԡ�
//
//	friend int main();
//};
//
//
//void func1()
//{
//	CStu stu;
//	stu.func();
//
//}
//
//
//
//int main()
//{
//	CStu stu1;
//	stu1.set_name("da pang!");
//	func1();
//	stu1.func();
//	stu1.set_age(24);
//	cout << stu1.get_age() << endl;
//
//
//	system("pause");
//	return 0;
//}