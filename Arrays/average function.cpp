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
float Avg(struct Array arr)
{
    return static_cast<float>(Sum(arr))/arr.length;
}
int main()
{

    struct Array arr = {{2,3,4,5,8},5,10};
    cout << Avg(arr);
    return 0;
}
