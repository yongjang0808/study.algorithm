#include <iostream>

using namespace std;




int main(){
	int tmp;
	int n, A[1001];
	cin>>n;
	
	for(int i=1; i<=n; i++){
	
		cin>>A[i];
	}
	
	for(int i=1; i<=n; i++){	
	    for(int j=1; j<=n-i; j++){
	        if(A[j]>A[j+1]){
	        	tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp; 
			}
	        
	 }
	}
	for(int i=1; i<=n; i++){	
	cout<<A[i]<<endl;
}
}
