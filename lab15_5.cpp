#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	int *p1=&a, *p2=&b, *p3=&c, *p4=&d;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4 << "\n";
	}
	
	return 0;
}
void shuffle(int *p1,int *p2,int *p3,int *p4){
	int P[]={*p1,*p2,*p3,*p4};
	for(int i=3;i>0;i--){
		int j = rand()%(i+1);
		swap(P[j],P[i]);
	}
	*p1=P[3];
	*p2=P[2];
	*p3=P[1];
	*p4=P[0];
}