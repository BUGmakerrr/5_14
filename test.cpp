#include <iostream>
using namespace std;
class Time{
public:
	~Time(){
		cout << "time" << endl;
	}
};
class Date{
public:
	Date(){
		_a = 0;
		_b = 0;
		_c = 0;
		cout << "ȫȱʡ" << endl;
	}
	Date(int a, int b, int c){
		_a = a;
		_b = b;
		_c = c;
		cout << "δȱʡ" << endl;
		cout << "origin" << _a << _b << _c << endl;
	}
	/*Date(int a = 0, int b = 0, int c = 0){
		_a = a;
		_b = b;
		_c = c;
		cout << "2" << endl;
	}*/
	Date(Date& d){
		_a = d._a;
		_b = d._b;
		_c = d._c;
		cout << "copy" << _a << _b << _c << endl;
	}
	bool operator==(const Date& d){
		return _a == d._a&&_b == d._b&&_c == d._c;
	}
	bool operator>(const Date& d){
		return (_a >= d._a&&_b > d._b&&_c > d._c) || (_a >= d._a&&_b > d._b&&_c < d._c) || (_a > d._a&&_b <= d._b&&_c <= d._c);
	}
private:
	int _a;
	int _b;
	int _c;
	Time _t;
};
class Stack{
public:
	Stack(int n = 10){
		_a = (int*)malloc(sizeof(int)*n);
		_size = 0;
		_capacity = n;
	}
	void Push(int x);
	void Pop();
	size_t Size();
	~Stack(){
		free (_a);
		_size = _capacity = 0;
	}
private:
	int* _a;
	int _size;
	int _capacity;
};
int main(){
	Date d1(31,3,2014);
	Date d2(d1);
	Date d3 = d1;
	Date d4;
	cout << (d1 == d2) << endl;
	cout << (d1 == d4) << endl;
	getchar();
	return 0;
}
//class Time
//{
//public:
//	~Time()
//	{
//		cout << "~Time()" << endl;
//	}
//};
//
//class Date
//{
//public:
//	/*Date()
//	{
//		_year = 0;
//		_month = 1;
//		_day = 1;
//	}*/
//	
//	//Date(int year, int month, int day)
//	//{
//	//	_year = year;
//	//	_month = month;
//	//	_day = day;
//	//}
//	Date(int year = 0, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//		cout << "Date()" << this << endl;
//	}
//
//	// ���Բ�д��Date��û��ʲô��Դ��Ҫ����
//	/*~Date()
//	{
//		cout << "~Date()" << this<<endl;
//	}*/
//private:
//	int _year;
//	int _month;
//	int _day;
//	// ���ǲ�д�����������ɵĹ��캯������������
//	// ��������/��������  int/char  ���ᴦ��
//	// �Զ�������  �������Ĺ��캯����ʼ��/��������
//
//	Time _t;
//};
//int main(){
//	Date d;
//	getchar();
//	return 0;
//}