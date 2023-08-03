#include<iostream>
using namespace std;
int main(){
int *arr,i,val,temp,j,k;
arr=new int[5];
cout<<"Enter array:";
for(i=0;i<5;i++){
    cin>>arr[i];
}
cout<<"\nThe sorted array(descending):";
for(i=0;i<5;i++){
    val=arr[i];
    temp=i;
    for(j=i-1;j>=0;j--){
        if(val>arr[j]){
            for(k=temp;k>j;k--)
                arr[k]=arr[k-1];
            arr[j]=val;
            temp=j;
        }
    }
}
for(i=0;i<5;i++)
    cout<<arr[i]<<" ";

return 0;
}
