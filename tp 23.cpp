#include <bits/stdc++.h>
using namespace std;
vector<int>VectorFactores(vector<int>v,int n);
void MostrarVector(vector<int>v);
int main(){
	vector<int>v;
	int n;
	cout<<"Ingrese un numero:"<<endl;
	cin>>n;
	v=VectorFactores(v,n);
    MostrarVector(v);
	return 0;
}
vector<int>VectorFactores(vector<int>v,int n){
	for(int i=1;i<=n;i++){
    	if(n%i==0){
    		v.push_back(i);
		}
 	}	
  return v;
}
void MostrarVector(vector<int>v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<"/";
	}
	cout<<endl;
}