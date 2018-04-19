//#include <iostream>
//
//using namespace std;
//
//class c_stu
//{
////访问修饰符 有三种 private protected public
//public:
//	int a;
//	int *b;
//
//	c_stu()
//	{
//		b = new int[20];
//		for (int i = 0; i < 20; i++)
//			b[i] = i;
//
//	}
//	//深拷贝构造
//	//深拷贝构造解决了指针成员地址复制的问题。
//	//拷贝构造对指针的处理也是复制，当我们复制了这个指针所指的内容时，第一次调用析构
//	//函数会释放一次地址，第二次释放时就会引起段错误，因为这块地址已经被释放过一次了。
//	c_stu(const c_stu & x)
//	{
//		this->a = x.a;
//		this->b = new int[20];
//		memcpy(this->b,x.b,80);
//	}
//
//
//	~c_stu()
//	{
//		delete[] b;
//
//	}
//
//};
//
////友元函数比较叼 可以访问类内的成员变量
//
//
//
//
////使用引用和指针可以避免进入拷贝构造，也可以提高程序运行的效率
////但是使用指针和引用也有弊端，因为直接操作同一块地址，使用的时候要特别的小心。
////不然会出现一些莫名奇妙的问题。
//
//
//int main()
//{
//	{
//		c_stu stu1;
//		cout << "i am in class stu1:" << endl;
//		for (int i = 0; i < 20; i++)
//			cout << stu1.b[i] << endl;
//
//		//拷贝一个类，我们只是拷贝这个类里面的数据成员，
//		c_stu stu2 = stu1;
//		cout << "\n i am in class sut2 :" << endl;
//		for (int i = 0; i < 20; i++)
//			cout << stu2.b[i] << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}