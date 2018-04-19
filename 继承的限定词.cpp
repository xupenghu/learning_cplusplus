//#include <iostream>
//using namespace std;
//
//
//
//class c_people
//{
//	//类的修饰符限定词：
//	//		private：只允许类内成员访问，子类也不可以访问。
//	//		protected:允许类内成员访问，子类public继承和protected继承都可以访问，但是类外定义的变量不可访问。
//	//		public： 允许类外访问
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
////子类使用public限定词修饰符继承父类时，父类什么状态，子类也是什么状态。
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
////子类使用protected限定词修饰符继承父类时，
////父类的public属性会被降级成protected，protected和private属性不变
////所以此时：父类的所有成员变量和成员方法都不可以在类定义后直接使用。要使用可以在类内创建public属性的函数，然后在声明中调用该函数。
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
////子类使用private限定词修饰符继承父类时，
////父类的所有属性都会被降级成private。
////所以此时：父类中的所有public和protect在子类中都为private 也就是说 此类再作为父类被其他子类继承时，他的爷爷类的所有成员都不可被访问。
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
//	//	c_xiaoming::c_people_pro_func(); //不可访问 此父类是private继承他的父类的。
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
////	sam1.c_people_pub_func(); //错误
////	sam1.show();  //正确
//	c_xiaoming xiaoming;
////	xiaoming.show();   //正确
//	c_xiaohua xiaohua;
//	xiaohua.show();  //正确 因为show这个函数在xiaoming类中是public属性 public继承后还是public属性
//	
//
//	system("pause");
//	return 0;
//}