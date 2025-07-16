#include<iostream>
using namespace std;
struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    cout << "\nThe elements are: \n";
    for(int i = 0;i < arr.length;i++)
    {
        cout << arr.A[i];
        cout << ' ';
    }
}
int Delete(struct Array *arr,int index)
{
    int x;
    if(index > 0 && index <arr->length)
    {
        x = arr->A[index];
        for(int i = index;i < arr->length - 1;i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;

}
int main()
{
    struct Array arr;
    arr = {{2,3,4,5,6},10,5};

    display(arr);
    cout << endl;
    cout << Delete(&arr,3);
    display(arr);

    return 0;
}
