#include <iostream>

using namespace std;

void merge(int A[1000000],int p,int q,int r );
void mergeSort(int A[1000000], int p,int r){
	if(p<r){
	int q=(p+r)/2;
	mergeSort(A,p,q);
	mergeSort(A,q+1,r);
	merge(A,p,q,r);
}
}


void merge(int A[1000000],int p,int q,int r ){
	int tmp[1000000];
	int i = p; 
	int j = q+1;
	int t = 0;
  while(i<=q&&j<=r){
  	if(A[i]<=A[j])
  	   tmp[t++] = A[i++];
  	else 
	  tmp[t++] = A[j++];
  }
  while(i<=q) tmp[t++]= A[i++];
  
  while(j<=r) tmp[t++]= A[j++];
  i=p;
  t=0;
  while(i<=r) A[i++] = tmp[t++];
}

int main(){
	int n, A[1000000];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>A[i];		
	}
	mergeSort(A, 0, n-1);
	for(int i= 0; i<n; i++){	
	cout<<A[i]<<'\n';
}
}
