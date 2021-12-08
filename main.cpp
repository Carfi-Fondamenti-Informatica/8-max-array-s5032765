#include <iostream>
using namespace std;

float max(float lista[],int dim){
	float max=lista[0];
	for(int i=1; i<dim; i++){
		if(lista[i]>max)
			max=lista[i];
	}
	return max;
}

int main(){
	int dim;
	cin>>dim;
	float numeri[dim];
	for(int i=0; i<dim; i++){
		cin>>numeri[i];
	}
	cout<<max(numeri,dim);
	return 0;
}
