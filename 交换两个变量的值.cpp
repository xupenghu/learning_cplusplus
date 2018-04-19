//#include <iostream>
//
//using namespace std;
//
//void change(int &a, int &b)
//{
//	int tmp;
//	tmp = a;
//	a = b;
//	b = tmp; 
//
//}
//
//void change1(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//
//}
//
//void change2(int *a, int *b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//
//
//}
//
//int main()
//{
//	cout << "这是一个测试两个变量值的交换问题的例子\n";
//	int x, y;
//	x = 123;
//	y = 456;
//
//	cout << "x = " << x << "   \t"<< "y =" << y << endl;
//	change(x,y);
//	cout << "in change:\n";
//	cout << "x = " << x << "   \t" << "y =" << y << endl;
//
//	x = 123;
//	y = 456;
//	change1(x, y);
//	cout << "in change1:\n";
//	cout << "x = " << x << "   \t" << "y =" << y << endl;
//
//	x = 123;
//	y = 456;
//	change2(&x, &y);
//	cout << "in change2:\n";
//	cout << "x = " << x << "   \t" << "y =" << y << endl;
//
//	system("pause");
//	return 0;
//}