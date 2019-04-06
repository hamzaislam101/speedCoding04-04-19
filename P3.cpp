#include<iostream>
#include<conio.h>
using namespace std;
main(){
	int a , b,n=0,q;
	cin>>a>>b;
	if(a>0 && b>0 &&  a<b && b%a == 0){
		q = b/a;
		while(q%2 == 0){
			q = q/2;
			n++;
		}
		while(q%3 == 0){
			q = q/3;
			n++;
		}
		if(q>1){
			cout<<"-1";
		}
		else
		cout<<n<<" times";
	}
	else{
		cout<<"-1";
	}

	getch();
}


