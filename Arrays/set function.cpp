#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
void Set(struct Array *arr,int index,int x)
{
    if(index>=0 && index<arr->length)
    {
        arr.A[index] = x;
    }
}
int main()
{
    struct Array arr = {{2,3,4,5,6},5,10};
    return 0;
}
