#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int wt,r,u,d;
	cin>>wt>>r>>u;
	if(u>wt+r){
		cout<<"Usage Exceeded";
	}
	else{
		if(wt>0 && r>=0 && u>0){
			d = (wt+r)/u;
			cout<<d<<" Days";
		}	
		else{
			cout<<"Input values are some kind of bad";
		}
	}
	
	getch();
}


