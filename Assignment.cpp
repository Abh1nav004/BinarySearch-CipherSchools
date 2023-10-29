#include<iostream>
using namespace std;

int binarysearch(int *arr,int l,int r,int val){
    int middle;
    middle=l+(r-l)/2;

    if(r>=l){
        if(arr[middle]==val){
            return 1;
        }
        else if(arr[middle]>val){
            // Then the val will definetly lie on the left side of the array

            binarysearch(arr,l,middle-1,val);
        }
        else{
            binarysearch(arr,middle+1,r,val);
        }

    }

    return -1;

}
void simplesearch(int *arr,int l, int r,int val){
    //We have to check whether val is present in the array between the indexes l and r


    //here comparing the "val" which we have to search with each and every element in the array 

    int i;
    for ( i = l; i < r; i++)
    {
        if (arr[i]==val)
        {
            cout<<"congrats your value is present in the array";
            return;
        }
        
    }

    cout<<"Sad bro, your value is not present in the array "<<endl;
    return;
    
}
int main(){
    int arr[7]={1,2,3,4,5,7,10};
    int size=7;

    simplesearch(arr,0,6,13); // 13 is not present in the array
    simplesearch(arr,0,6,10); // 10 is present in the array
    if(binarysearch(arr,0,6,10)==1) cout<<"your value is present in the array ";
    return 0;
}