#include<iostream>
#include<conio.h>
using namespace std;

main(){
	int i=0,a,b,arr[100],ar[100],max=0,temp,z,s=0,tr=0;
	cin>>a;
	b=a;
	while(b>0){
		arr[i] = b%10;
		b = b/10;
		i++;
	}
	for(int j = 0;j<i;j++){
		ar[j] = arr[i-j-1];
	}
	while(s<2 && tr!=i-1){
		max = 0;
		z = 0;
		for(int k = tr;k<i;k++){
			if(ar[k]>max){
				max = ar[k];
				z=k;
			}
		}
		if(z > tr){
			temp = ar[z];
			ar[z] = ar[tr];
			ar[tr] = temp;
			cout<<ar[z]<<" swaped with "<<ar[tr]<<endl;
			s++;
		}
		cout<<tr<<" value: tr"<<endl;
		tr++;
	}
	for( int k = 0;k< i;k++){
		cout<<ar[k];
	}
	getch();
}


