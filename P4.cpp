#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int h=0,m=0;
	for(int i = 0;i<24;i++){
		for(int j = 0;j<60;j++){
			if(i == j){
				cout<<i<<" : "<<j<<endl;
			}
			else if(i%10 == j && i/10 == j){
				cout<<i<<" : "<<j<<endl;
			}
			else if(j%10 == i && j/10 == i){
				cout<<i<<" : "<<j<<endl;
			}
		}
	}
	getch();
}


