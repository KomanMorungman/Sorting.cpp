#include<iostream>
using namespace std;
int main(){
int *arr,i,j,temp;
arr=new int[5];
cout<<"Enter array:";
for(i=0;i<5;i++){
    cin>>arr[i];
}
cout<<"\nThe sorted array(ascending):";
for(i=0;i<4;i++){
    for(j=0;j<(4-i);j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
for(i=0;i<5;i++)
    cout<<arr[i]<<" ";
return 0;
}
