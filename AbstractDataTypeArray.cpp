#include <iostream>
using namespace std;
// class myArray
// {
// public:
//     int total_size; //Memory to be reserved
//     int used_size;  //Memory to be used
// };

struct myArray
{
    int total_size;
    int used_size;
    int *ptr; //points to 1st element in array
};

void createArray(struct myArray *a, int tSize, int uSize)
{
    // (*a).total_size = tSize;
    // (*a).used_size = uSize;
    // (*a).ptr = new int[tSize];
    a->total_size = tSize; //Same as above
    a->used_size = uSize;
    a->ptr = new int[tSize];
}

void show(struct myArray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "\n"
             << a->ptr[i];
    }
}
void setVal(struct myArray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> n;
        (a->ptr)[i] = n;
    }
}
int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setVal now\n");
    setVal(&marks);
    printf("We are running show now");
    show(&marks);

    return 0;
}