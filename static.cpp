#include <iostream>
using namespace std;

class c_stu
{
public:
	int a;

	//1����̬��Ա�������һ�����ԣ�������һ����������ԡ�
	//2���ڱ����������ʱ�������Ѿ����ڡ�
	//3����̬��Ա������Ϊ�ഴ�������һ����ͨ��������
	static int b;  

	//��̬��Ա��������ʹ�þ�̬��Ա����
	static void func();

};

//�����ʼ��
int c_stu::b = 10;

void c_stu::func()
{
	int x = 100;
	int y = 200;
	int z = x + y;
	b = 13;
	cout << "&z = " << &z << endl;
	cout << "&b = " << &b << endl;

}


int main()
{
	//�������������ֱ�ӷ��ʾ�̬��Ա�����;�̬��Ա����
	cout << c_stu::b << endl;
	 c_stu::func();

	//����Ҳ���Է���
	c_stu stu;
	cout << stu.b << endl;
	stu.func();

	system("pause");
	return 0;
}