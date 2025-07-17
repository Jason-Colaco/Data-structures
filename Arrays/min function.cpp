#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
int Min(struct Array arr)
{
    int min = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
}
int main()
{

    struct Array arr = {{2,3,4,5,6},5,10};
    cout << Min(arr);
    return 0;
}
