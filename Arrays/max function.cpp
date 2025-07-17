#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};
int Max(struct Array arr)
{
    int max = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}
int main()
{

    struct Array arr = {{2,3,4,5,6},5,10};
    cout << Max(arr);
    return 0;
}
