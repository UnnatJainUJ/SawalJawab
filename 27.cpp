#include<iostream>
using namespace std;
int main(){
  int n , k=0;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
    int z=1;
    int l=0;
    k=(i+1);
    for (int j = 0; j < n-i; j++)
    {
        cout<<" ";
    }
    while(l!=k){
        cout<<z;
        l++;
        z++;
    }
    z=z-2;
    l=0;
    while((l)!=i){
        cout<<z;
        z--;
        l++;
    }
    for (int j = 0; j < n-i; j++)
    {
        cout<<" ";
    }
    cout<<endl;
  }
  
return 0;
}