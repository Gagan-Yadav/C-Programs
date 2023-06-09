#pragma once

class Array
{

    int* _array;
    friend std::ostream& operator<<(std::ostream&os,Array& value){
        os<<"[ ";
        for(int i{0};i<value.size;i++)
            os<<value[i]<<" ";
        os<<"]"<<std::endl;
        return os;
    }
    public:
int size{};
Array(int size):size{size}{
    _array=new int[size];
    for(int i=0;i<size;i++){
        _array[i]=0;
    }
}    
~Array(){
    delete[] _array;
}
int& operator[] (int indx){
    return _array[indx];
}
void insertion_sort(){
    for(int i{0};i<size;i++){
    int key = _array[i];
        int indx{i};
        for(int j{i-1};j>=0 && _array[j] > key; j--){
            _array[j+1] = _array[j];
            indx = j;
        }
        if(indx !=i)
            _array[indx]=key;
    }
    
}

};

