#include<iostream>
using namespace std;
bool functionfactor (int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<n<<" is not a prime number. "<<endl;
           return false;
        }
        else{
            cout<<n<<" is a prime number "<<endl;
            return true;
        }
    }
}

int main(){
    int n;

    cout<<"enter a number :";
    cin>>n;
   bool a= functionfactor(n);
    cout<<bool(a);
    return 0;

}