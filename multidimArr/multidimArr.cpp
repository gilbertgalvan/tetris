#include <iostream>
int main(){

    //pointer of type int named 'array'. It points to the first element
    //in an array of 50 integer type pointers
    //[ , , , , , ... , , , ]
    //ints are 4 bytes, we want 50 of those, for a total of 200 bytes
    int* array = new int[50];

    //pointer of type pointer to an integer, an array of 50 of those 
    //this as well is a total of 200 bytes
    int** a2d = new int*[50];

    //when you reference in this manner
    a2d[0] = nullptr; //this is an integer
    array[0] = nullptr; //this is an integer pointer


    std::cin.get();
}