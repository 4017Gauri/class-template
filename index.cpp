#include<iostream>
using namespace std;

template<class T>
class calc{
	T num1, num2;
	public:
		calc(T n1, T n2){
		num1 = n1;
		num2 = n2;
		}
		T add(){
			return num1+num2;
		}
		T sub(){
			return num1 - num2;
		}
		T mul(){
			return num1 * num2;
		}
		T div(){
			return num1 / num2;
		}
	void display(){
		cout<<"\n Addition of two number\t:"<<add();
		cout<<"\n substraction of two number\t:"<<sub();
		cout<<"\n multiplication of two number\t:"<<mul();
		cout<<"\n division of two number\t:"<<div();
		}
};
int main(){
	calc<int>cl(200,100);
	cl.display();
	return 0;

}
