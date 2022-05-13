// Program to implement Queue data structure.
// Also Called FIFO (First In First Out)
//
#include <iostream>
tousing namespace std; 

// Creating class Queue
class Queue { 
    int size; 
    int* queue; 
    
    public:
    Queue() {
        size = 0;
        queue = new int[100];
    }
    // Method to remove data from Queue
    void remove() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } 
        else { 
            for (int i = 0; i < size - 1; i++) { 
                queue[i] = queue[i + 1]; 
            } 
            size--; 
        } 
    } 
    // Method to display data of Queue
    void print() { 
        if (size == 0) { 
            cout << "Queue is empty"<<endl; 
            return; 
        } 
        for (int i = 0; i < size; i++) { 
            cout<<queue[i]<<" <- ";
        } 
        cout <<endl;
    }
    // Method to Add data to Queue
    void add(int val){
        if(size == 100-1){
             cout<< "Queue is full"<<endl;
        }else{
             queue[size] = val;
             size++;
     };
 };
}; 

int main() { 
    Queue q; 
    q.add(42); q.add(2); q.add(8); q.add(1); 
 q.print();
    q.remove(); 
    q.add(128); 
    q.print(); 
    q.remove(); 
    q.remove(); 
    q.print(); 

    return 0; 
} 


// Output
// 42 <- 2 <- 8 <- 1 <-
// 2 <- 8 <- 1 <- 128 <-
// 1 <- 128 <-

