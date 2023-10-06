
#include<iostream>
#include"Array.hpp"
int main()
{
    std::cout<<"hello !"<<std::endl;
    Array arr(5);
    std::cout<<arr<<std::endl;
    int val{};
    for(int i{0}; i<arr.size ;i++){
        std::cin>>val;
        arr[i] = val;
    }
    arr.insertion_sort();
    std::cout<<arr<<std::endl;
    return 0;
}
