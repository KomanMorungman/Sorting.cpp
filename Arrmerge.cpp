#include<iostream>
using namespace std;
int main(){
int *arr1,*arr2,*arr3,m,n,i=0,j=0,k=0,temp;
cout<<"Enter sizes of an array:";
cin>>m>>n;
temp=m+n;
arr1=new int[m];
arr2=new int[n];
arr3=new int[temp];
cout<<"\nEnter array1:";
for(;i<m;i++)
    cin>>arr1[i];
cout<<"\nEnter array2:";
for(;j<n;j++)
    cin>>arr2[j];
i=0;
j=0;
while((i<m)&&(j<n)){
    if(arr1[i]<arr2[j]){
        arr3[k]=arr1[i];
        i++;
        k++;

    }
    else{
        arr3[k]=arr2[j];
        j++;
        k++;
    }
}

if(i<=(m-1)){
    for(;i<=m;i++){
        arr3[k]=arr1[i];
        k++;
    }
}
else if(j<=(n-1)){
    for(;j<=n;j++){
        arr3[k]=arr2[j];
        k++;
    }

    }
cout<<"\nThe merged array:\n";
for(i=0;i<temp;i++)
    cout<<arr3[i]<<" ";


return 0;
}
