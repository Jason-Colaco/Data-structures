#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
int Sum(struct Array arr)
{
    int s=0;
    for(int i=0;i<arr.length;i++)
    {
        s+=arr.A[i];
    }
    return s;
}
int main()
{

    struct Array arr = {{2,3,4,5,6},5,10};
    cout << Sum(arr);
    return 0;
}
