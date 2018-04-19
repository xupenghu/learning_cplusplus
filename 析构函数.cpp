//#include <iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	int b;
//	int c;
//	float f;
//
//
//
//	void show()
//	{
//		cout << a << endl;
//		cout << b << endl;
//		cout << c << endl;
//
//	
//	
//	}
//	//构造函数在变量申明的时候被调用。
//	CStu()
//	{
//		cout << "构造函数开始执行 ！" << endl;
//
//	}
//	//析构函数在本变量生命周期结束的时候调用 用来释放资源
//	~CStu()
//	{
//		cout << "析构函数开始执行！" << endl;
//	}
//
//};
//
//
//
//
//int main()
//{
//
////	CStu stu1;
////	CStu();  //临时对象 生命周期只在本行
//	
//	//使用new 和delete申请的内存空间会调用构造和析构函数
//	//CStu *stu2  = new CStu;
//	//stu2->a = 190;
//	//delete stu2;
//
//
//	//使用malloc和free申请的内存不会调用构造函数和析构函数
//	CStu *stu3 = (CStu *)malloc(sizeof(CStu));
//	cout << sizeof(stu3) << endl;
//	free(stu3);
//
//
////	cout << sizeof(*stu2) << endl;
////	cout << stu2->a << endl;
//
//
//
//
//
//
////	int b = int(12); //临时变量 相当于 int c =12 ; b = c ;
//
//	system("pause");
//	return 0;
//}