#include <iostream>
#include "Complex.h"
void BubbleSort(double pDouble[4], int n);
void BubbleSort(int pInt[4], int n);
void BubbleSort(complexNumber pCom[], int n);

int main() {
//    double arr[5] {3.5, 8.5, 1.2, 1.1, 8.8};
//    BubbleSort(arr, 4);
    complexNumber q{};
    complexNumber arr2[4] {5, 3, 3, 2, 8, 10, 12, 13};
    BubbleSort(arr2, 4);
}

void BubbleSort(double pDouble[4], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pDouble[r] < pDouble[r+1])
            {
                int temp = pDouble[r];
                pDouble[r] = pDouble[r+1];
                pDouble[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
        std::cout << pDouble[i] << " ";
    }
}
void BubbleSort(int pInt[], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n - i; r++)
        {
            if(pInt[r] < pInt[r+1])
            {
                // Обмен местами
                int temp = pInt[r];
                pInt[r] = pInt[r+1];
                pInt[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
        std::cout << pInt[i] << " ";
    }
}
void BubbleSort(complexNumber pCom[5], int n) {
    for (int i = 1; i < n; ++i) {
        for (int r = 0; r < n - i; r++) {
            if (pCom[r] < pCom[r + 1]) {
                complexNumber temp = pCom[r];
                pCom[r] = pCom[r + 1];
                pCom[r + 1] = temp;
            }
        }
    }
    for(auto i = 0; i < n; ++i)
    {
        std::cout << pCom[i] << " ";
    }
}