#include <iostream>
#include <cmath>
using namespace std;



long int fib(int i){
	int a =i-1;
	int b =i-2;
	long int y;
	if (i==0){
		return 0;
	}
	else{
		if (i==1){
			return 1;
		}
		else{
			y = fib(a)+fib(b);
			return y;
		}
	}
}

int main(){
	long int f;
	int N;	

	cout <<"N"<< endl;
	cin >> N;

	f=fib(N);
	cout << f << endl;

}
