#include <iostream>
using namespace std;
class Date{
public:
	Date(){
		_a = 0;
		_b = 0;
		_c = 0;
		cout << "1" << endl;
	}
	//Date(int a, int b, int c){
	//	_a = a;
	//	_b = b;
	//	_c = c;
	//	cout << "2" << endl;
	//}
	Date(int a = 0, int b = 0, int c = 0){
		_a = a;
		_b = b;
		_c = c;
		cout << "2" << endl;
	}
private:
	int _a;
	int _b;
	int _c;
};
int main(){
	Date d1(1);
	getchar();
	return 0;
}