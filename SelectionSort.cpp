#include <iostream>

using namespace std;

int main(){
	int n, A[1001], tmp;
	
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>A[i];
	}

	for(int i=n; i>=1; i--){
		int largest =1;
		for(int j=i; j>=1; j--){			 		     
            if(A[j]>A[largest]){	
				largest = j;
			}
		}
		tmp = A[i];
		A[i] = A[largest];
		A[largest] = tmp;    
	}
	
	for(int i=1; i<=n; i++){
		cout<<A[i]<<endl;
    }
}
	

