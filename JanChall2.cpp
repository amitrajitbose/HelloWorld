/*
@uthor: abhishekMadhu
handle: coder_nigga
UEM,KOLKATA
*/
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;
typedef long long ll;
#define MAX 10010
#define lli long long int

int main(){
    int t;
    cin>>t;
    while (t--){
        int n,flag;
        cin>>n;
        lli **p,sum,select,prev,x;

        p=(lli**)malloc(n*sizeof(lli*));

        for(int i=0; i<n; i++){
            p[i]=(lli *) malloc (n*sizeof(lli));
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>p[i][j];
            }
			sort(p[i], p[i]+n, greater<lli>());
        }

        flag=0;
        sum = select = 0;
        prev=p[n-1][0];
		cout<<prev<<" ";
        sum+=prev;
        for(int i=n-1; i>0 ; i--){
            x=0;
            while(p[i][x]<prev || x<n-1){
                x++;
            }
            if(x==n-1){

            }
            select = p[i][x];
            sum+=select;
			prev=select;
			cout<<prev<<" ";

        }
    }
    return 0;
}