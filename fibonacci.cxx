#include <iostream>
#include <cmath>
using namespace std;



long int fib(int i){
	if (i==0){
		return 0;
	}
	if(i==1)
	{
		return 1;
	}
	return fib(i-1) + fib(i-2);
}
int main(){
	long int f;
	int N;	

	cout <<"Enter The Value of N"<< endl;
	cin >> N;

	cout << fib(N) << endl;

}
