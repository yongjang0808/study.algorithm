#include <iostream>

using namespace std;

int main(){
           int n, tmp, A[1001], loc, newItem;
         cin>>n;
		 for(int i=1; i<=n; i++){ 
             cin>>A[i]; 
        } 
		  
		for(int i=2; i<=n; i++){
		loc = i-1;
		newItem = A[i];    
            while(loc>=1 && newItem <A[loc]){    	
			tmp = A[loc+1];
            A[loc+1]= A[loc];
            A[loc] = tmp;
           	loc--;
	        }
	        
	    }
	    
    
    for(int i=1; i<=n; i++){
    cout<<A[i]<<endl;
	}
}


