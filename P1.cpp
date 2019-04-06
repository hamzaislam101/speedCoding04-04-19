#include<iostream>
#include<conio.h>
using namespace std;
class test{
	private:

	public:
		test(){

		}

};

main(){
	int a,b,max,min,n,d;
	cin>>a>>b;
	if(a<b){
		max = b;
		min = a;
	}
	else{
		max = a;
		min = b;
	}
	for(int i = 2;i<=min;i++){
		if(a%i == 0 && b%i == 0){
			a = a/i;
			b = b/i;
		}
	}
	cout<<a<<":"<<b;
	getch();
}


