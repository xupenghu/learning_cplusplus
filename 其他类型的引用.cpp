//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout << "����һ������ �����������õ�����\n" << endl;
//
//	//����������
//	const int &a = 12;  //a �������޸� �൱�� a ����12  12 ����a
//	cout << "a = " << a << endl;
//
//	//һά���������
//	int name[100];
//	int(&p)[100] = name;
//	p[1] = 120;
//	cout << "name[1] = " << name[1] << endl;
//
//	//��ά���������
//	int arr[2][3];
//	int(&p1)[2][3] = arr;
//	p1[0][3] = 1245;
//	cout << "arr[0][3] = " << arr[0][3] << endl;
//
//	//ָ������� 
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