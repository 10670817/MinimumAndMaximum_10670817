#include <iostream>

using namespace std;

int main()
{
    int maxim,minim,key=0;
    cout<<"Please Enter The Number Of Values You Wish To Find The MAXIMUM and MINIMUM: ";
    cin>>key;
    cout<<"Please Input The Numbers"<<endl;
    int arr[key];
    for(int i=0; i<key; i++){
        cout<<"Number_"<<i<<";";
        cin>>arr[i];
        cout<<endl;
    }
    minim=arr[0];
    maxim=arr[0];
     for(int j=0; j<key;j++){
        if(arr[j]>maxim){
            maxim=arr[j];
        }
        if(arr[j]<minim){
            minim=arr[j];
        }

     }
     cout<<"The Minimum Value Is: "<<minim<<endl;
     cout<<"The Maximum Value Is: "<<maxim<<endl;
    return 0;
}
