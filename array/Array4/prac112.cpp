#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
void mergesort(int a[],int n){
    int indexofmin;
    int i,j;
    for(i=0;i<n-1;i++){
        indexofmin=i;
        for(j=i+1;j<n;j++){
            if(a[indexofmin]>a[j]){
                indexofmin=j;
            }
        }
        if(indexofmin!=i){
        swap(a[indexofmin],a[j]);
        } 
    }
}
int main(){
    int n;
    int a[500];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
