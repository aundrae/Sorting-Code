//Sorting Code
#include <stdio.h>
//----------------------------------------------------
int getSmallest(int arr[],int lo,int hi){
    int min=lo++;
    while(lo<=hi){
        if(arr[lo]<arr[min])
            min=lo;
        lo++;
    }
    return min;
}
int getLargest(int arr[],int lo,int hi){
    int max=lo++;
    while(lo<=hi){
        if(arr[lo]>arr[max])
            max=lo;
        lo++;
    }
    return max;
}
//----------------------------------------------------
void swap(int arr[],int lo,int hi){
    int temp=arr[lo];
    arr[lo]=arr[hi];
    arr[hi]=temp;
}
//----------------------------------------------------
void sort(int arr[],int lo,int hi){
    while(lo<hi){
        swap(arr,getSmallest(arr,lo,hi),lo);
        swap(arr,getLargest(arr,lo,hi),hi);
        lo++;
        hi--;
    }
}
//----------------------------------------------------
int main(){
    int array[9]={0,4,6,7,3,5,8,9,10},i=1;
    sort(array,1,8);
    for(i=1;i<9;i++){
        printf("%d\n",array[i]);
    }
}
