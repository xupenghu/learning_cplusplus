//#include <iostream>
//using namespace std;
//
//class c_father
//{
//public :
//	int a;
//	c_father()
//	{
//		a = 100;
//	}
//
//};
//
//class c_son : public c_father
//{
//public:
//	int b;
//
//	c_son()
//	{
//		a = 500;
//		b = 200;
//	}
//
//};
//
//int main()
//{
//	c_father * fa = new c_father;
//	c_son * so = new c_son;
//
//	fa->a = 124;
//
//	fa = (c_father*)so;
//	so = (c_son*)fa;
//
//	cout << so->a << endl;
//
//
//	so = static_cast<c_son*>(fa); //ÀàĞÍ×ª»»
//	fa = static_cast<c_father*>(so);
//
//
//
////	cout << fa->a << endl;
//
//
//	system("pause");
//	return 0;
//}