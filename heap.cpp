//
// Created by Ethan on 2021/8/21.
//

#include "heap.h"
#include <vector>


bool Heap::empty() {
    //using "empty" inner function in vector to test emptiness
    return vdata.vector::empty();
}

void Heap::push(int value) {
    if(empty())
    {
        Heap::vdata.insert(vdata.begin(),value);
        return;
    }
    else {
        // Declaring iterator to this tree vector if it's not empty
        auto ptr = Heap::vdata.begin();
        for (ptr; ptr != vdata.end(); ptr++) {
            if (value < *ptr) {
                vdata.insert(ptr, value);
                return;
            } //in case we find the value in the middle part
        }
        //add this element to the end when this pushed value is larger than any other
        vdata.push_back(value);
        return;
    }
}


///pop is to delete the min element, which is the first one
void Heap::pop() {
    Heap::vdata.erase(vdata.begin());
}

int Heap::top() {
    if (!empty()){
        return vdata[0];
    }
    else
        return -1;
}





