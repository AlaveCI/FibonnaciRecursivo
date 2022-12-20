#include<iostream>

using namespace std;

int serieFibo(int n);
int main(){
    int num,serie;

    cout<<"======================================"<<endl;
    cout<<"Serie Fibonacci Digite un numero"<<endl;
    cin>>num;
    cout<<"======================================"<<endl;
    serie =serieFibo(num);
    cout<<"Resultado"<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<serie<<endl;
    return 0;
}
int serieFibo(int n){
    //cout<<"-----------"<<endl;
  //  cout<<n<<endl;
    if(n<=1){
        return n;
    }else{
       return serieFibo(n-1) + serieFibo(n-2);
    }

}
