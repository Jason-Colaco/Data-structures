#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};

int Get(struct Array arr,int index)
{
    if(index >=0 and index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

int main()
{
    struct Array arr = {{2,3,4,5,6},5,10};
    cout << "Element at index 3 is: " << Get(arr, 3) << endl;
    return 0;
}
