#include<iostream>

int linearsearch(int n ,int arr[],int key){
for(int i=0;i<n;i++){
    if(arr[i]==key){
        std::cout<<"value matched";
        return i;
    }
}
std::cout<<"value does not matched";
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
    std::cout<<linearsearch(n,arr,key);

    



}