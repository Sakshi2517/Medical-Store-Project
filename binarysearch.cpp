#include<iostream>
int binarysearch(int n,int arr[],int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid= (s+e)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    std::cout<<"Enter the size";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];

    }
    int key;
    std::cout<<"Enter the value to be searched/n";
    std::cin>>key;
    std::cout<<binarysearch(n,arr,key);
    return 0;
}