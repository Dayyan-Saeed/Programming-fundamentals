#include <iostream>
using namespace std;

int vis_swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    return a, b;

}

void invisible_swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void invisible_swap_pointers(int* a, int* b)
{
    int* pSwap = a;
    a = b;
    b = pSwap;
  
    return;
}
int visible_swap_pointers(int* a, int* b)
{
    int* pSwap = a;
    a = b;
    b = pSwap;

    return *a,*b;

}

int main()
{
    int p = 7;
    int q = 9;

    cout << "swap" << vis_swap(p, q) << endl;

    invisible_swap(p, q);
    cout << "p = " << p << "  q= " << q << endl;

    cout << "vis swap ptr" << visible_swap_pointers(&p, &q) << endl;


    invisible_swap_pointers(&p, &q);
    cout << "p = " << p << "  q= " << q << endl;
    return 0;
}