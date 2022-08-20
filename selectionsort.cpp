#include<iostream>

int main(){
    int n;
    std::cout<<"Enter the size";
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];

    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;          
                  }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
        

    }
    return 0;
}