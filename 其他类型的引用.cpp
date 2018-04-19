//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout << "这是一个测试 其他类型引用的例子\n" << endl;
//
//	//常量的引用
//	const int &a = 12;  //a 不允许修改 相当于 a 就是12  12 就是a
//	cout << "a = " << a << endl;
//
//	//一维数组的引用
//	int name[100];
//	int(&p)[100] = name;
//	p[1] = 120;
//	cout << "name[1] = " << name[1] << endl;
//
//	//二维数组的引用
//	int arr[2][3];
//	int(&p1)[2][3] = arr;
//	p1[0][3] = 1245;
//	cout << "arr[0][3] = " << arr[0][3] << endl;
//
//	//指针的引用 
//	int b = 89;
//	int *p2 = &b;
//	int * &p3 = p2;
//
//	*p3 = 98;
//
//	cout << "b = " << b << endl;
//
//
//
//	system("pause");
//	return 0;
//}