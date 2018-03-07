#include<bits/stdc++.h>

using namespace std;

int a[] = {1, 9, 8, 5, 10, 2, 3};
pair <int, int> P[4];
int main(){
	
	sort(a, a+7);  
 
 	for(int i=0; i<7; i++){
 		cout << a[i] << " "; 
	}
 	cout << endl; 
    P[0].first = 4; 
 	P[0].second = 10; 
  	P[1].first = 2; 
	P[1].second = 8; 
	P[2] = make_pair(2,12);
	P[3] = make_pair(4,5);
    
    sort(P, P+4);
    for(int i=0; i<4; i++){
    	cout << P[i].first << " " << P[i].second << endl;
	}
	return 0;
}
