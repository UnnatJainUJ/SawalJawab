#include<iostream>
using namespace std;
int main(){
  int n ,z=1, k=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    int l=0;
    k=(2*i+1);
    for (int j = 0; j < n-i; j++)
    {
        cout<<" ";
    }
    while(l!=k){
        cout<<z;
        l++;
        z++;
    }
    for (int j = 0; j < n-i; j++)
    {
        cout<<" ";
    }
    cout<<endl;
  }
  
return 0;
}