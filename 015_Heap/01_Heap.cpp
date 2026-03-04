#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Heap{
    vector<int> vec;

public:
    void push(int val){
        // add value
        vec.push_back(val);

        // fix heap
        int x = vec.size()-1;
        int parIdx = (x-1)/2;
        
        while(parIdx >= 0 && vec[x] > vec[parIdx]){ // O(logn)
            swap(vec[x], vec[parIdx]);
            x = parIdx;
            parIdx = (x-1)/2;
        }
    }


    void heapify(int i){
        if(i >= vec.size()){
            return;
        }

        int l = 2*i+1;
        int r = 2*i+2;

        int maxIdx = i;
        if(l<vec.size() && vec[l] > vec[maxIdx]){
            maxIdx = l;
        }
        if(r<vec.size() && vec[r] > vec[maxIdx]){
            maxIdx = r;
        }
        
        swap(vec[i],vec[maxIdx]);
        if(i != maxIdx){
            heapify(maxIdx);
        }

    }

    void pop(){
        // step 1 
        swap(vec[0],vec[vec.size()-1]);

        // step 2
        vec.pop_back();

        // step 3
        heapify(0);
    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return (vec.size() == 0);
    }

};

class Student{
public:
    string name;
    int marks;

    Student(string name,int marks){
        this->name = name;
        this->marks = marks;
    }
    // For Objects
    bool operator < (const Student &obj) const{
        return this->marks < obj.marks;
    }
};

int main(){
    Heap heap;
    heap.push(10);
    heap.push(20);
    heap.push(30);

    while(!heap.empty()){
        cout<<heap.top()<<" ";
        heap.pop();
    }
    return 0;
}