//#include <iostream>
//using namespace std;
//
//
//
//class c_people
//{
//	//������η��޶��ʣ�
//	//		private��ֻ�������ڳ�Ա���ʣ�����Ҳ�����Է��ʡ�
//	//		protected:�������ڳ�Ա���ʣ�����public�̳к�protected�̳ж����Է��ʣ��������ⶨ��ı������ɷ��ʡ�
//	//		public�� �����������
//private:
//	int pri_a;
//	void c_people_pri_func()
//	{
//		cout << "[i am in class c_people] private :c_people_pri_func()" << endl;
//	}
//
//protected:
//	int pro_b;
//	void c_people_pro_func()
//	{
//		cout << "[i am in class c_people]  protected :c_people_pro_func()" << endl;
//	}
//
//public:
//	int pub_c;
//	void c_people_pub_func()
//	{
//		cout << "[i am in class c_people]  public :c_people_pub_func()" << endl;
//	}
//
//};
//
//
////����ʹ��public�޶������η��̳и���ʱ������ʲô״̬������Ҳ��ʲô״̬��
//class c_ergou :public c_people
//{
//public :
//	int ergou_a;
//	void show()
//	{
//		c_people_pro_func();
//		c_people_pub_func();
//	}
//};
//
////����ʹ��protected�޶������η��̳и���ʱ��
////�����public���Իᱻ������protected��protected��private���Բ���
////���Դ�ʱ����������г�Ա�����ͳ�Ա���������������ඨ���ֱ��ʹ�á�Ҫʹ�ÿ��������ڴ���public���Եĺ�����Ȼ���������е��øú�����
//class c_sanmao :protected c_people
//{
//public:
//	int ergou_a;
//	void show()
//	{
//		c_people_pro_func();
//		c_people_pub_func();
//	}
//};
//
////����ʹ��private�޶������η��̳и���ʱ��
////������������Զ��ᱻ������private��
////���Դ�ʱ�������е�����public��protect�������ж�Ϊprivate Ҳ����˵ ��������Ϊ���౻��������̳�ʱ������үү������г�Ա�����ɱ����ʡ�
//class c_xiaoming :private c_people
//{
//public:
//	int ergou_a;
//
//	void show()
//	{
//		c_people_pro_func();
//		c_people_pub_func();
//	}
//};
//
//class c_xiaohua :protected c_xiaoming
//{
//public:
//	void show()
//	{
//	//	c_xiaoming::c_people_pro_func(); //���ɷ��� �˸�����private�̳����ĸ���ġ�
//		c_xiaoming::show();
//	}
//
//
//};
//
//int main()
//{
//	c_people peo1;
//	c_ergou ergou1;
////	ergou1.c_people_pub_func();
//	c_sanmao sam1;
////	sam1.c_people_pub_func(); //����
////	sam1.show();  //��ȷ
//	c_xiaoming xiaoming;
////	xiaoming.show();   //��ȷ
//	c_xiaohua xiaohua;
//	xiaohua.show();  //��ȷ ��Ϊshow���������xiaoming������public���� public�̳к���public����
//	
//
//	system("pause");
//	return 0;
//}