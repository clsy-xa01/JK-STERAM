#include <bits/stdc++.h>
using namespace std;

int Cin(int A[],int n){//输入
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    return 0;
}

int Mod(int A[],int B[],int C[],int n){
    C[0]=0;
    for(int i=1;i<=n;i++){
        if(C[i-1]==0){
            C[i]=abs((A[(i-1)%7])%2);//前位为0，Ci=Ai(注意取模)
        }
        else if(C[i-1]==1) 
        C[i]=abs(!(B[(i-1)%15]%2));//前位为1，Ci=!Bi(注意取模)
    }
    return 0;
}

int Print(int A[],int n){
    for(int i=1;i<=n;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
int main(){
    int a,b,k;
    cin>>a>>b;
    k=a*b;
    int A[a],B[b],C[k];
    Cin(A,a);
    Cin(B,b);
    Mod(A,B,C,k);
    Print(C,k);
    //Print(A,a);
    //Print(B,b);
    return 0;
}