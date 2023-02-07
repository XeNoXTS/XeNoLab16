#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a, int &b, int &c, int &d){
	int wallet[] = {a, b, c, d};
	int n = sizeof(wallet)/sizeof(int);
	for(int i = 0; i < n; i++){
		int x = rand()%4;
		int y = rand()%4;
		int temp = wallet[x];
		wallet[x] = wallet[y];
		wallet[y] = temp;
	}
	a = wallet[0],b = wallet[1], c = wallet[2], d = wallet[3];
}