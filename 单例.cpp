//#include <iostream>
//
//using namespace std;
//
////������һ������ֻ��ʵ����һ��
////ʵ�ֵ������ĸ�����
////1�����캯��������private����protect ����������������ʵ����
////2��ͨ����̬��Ա�����������ռ䣬�����ص�ַ
////3��ʹ��һ����̬��Ա��������������
////4�������������У���������գ��Դﵽ�ظ������Ŀ��
//
//class c_father
//{
//private :
//	c_father()
//	{
//		
//	}
//
//
//public:
//	static int count;
//	static c_father * creat_dl()
//	{
//		if (count)
//		{
//			count = 0;
//			return (new c_father);
//		}
//		else
//			return NULL;	
//	}
//
//	~c_father()
//	{
//		count = 1;
//	}
//
//
//
//};
//
//int c_father::count = 1;
//
//int main()
//{
//	c_father * fa = c_father::creat_dl(); //ͨ����̬��Ա�����������ռ䣬�����ص�ַ
//	delete fa;
//	c_father * fa1 = c_father::creat_dl();
//	if (NULL == fa1)
//	{
//		cout << "�������ʧ�ܣ�" << endl;
//	}
//
//	system("pause");
//	return 0;
//}







