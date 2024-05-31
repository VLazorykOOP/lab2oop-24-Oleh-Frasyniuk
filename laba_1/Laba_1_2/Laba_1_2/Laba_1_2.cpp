
#include <iostream>
#include <vector>

int main() {

    int N;
    

    //розмір масиву
    std::cout << "Enter the size of the array (N): ";
    std::cin >> N;

    std::vector<int> A(N); //щоб не було проблем що немає константи

    //елементи масиву
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "A[" << i << "]: ";
        std::cin >> A[i];
    }

    int T1, T2;
    //значення T1 та T2
    std::cout << "Enter the value of T1: ";
    std::cin >> T1;
    std::cout << "Enter the value of T2: ";
    std::cin >> T2;

    int minIndex = -1; //індекс останнього мінімального елемента
    int firstT2Index = -1; //індекс першого елемента, рівного T2

    //знаходимо індекс першого елемента, рівного T2
    for (int i = 0; i < N; ++i) {
        if (A[i] == T2) {
            firstT2Index = i;
            break;
        }
    }

    //знаходимо останній мінімальний елемент, менший T1, та лежачий правіше першого елемента, рівного T2
    for (int i = firstT2Index + 1; i < N; ++i) {
        if (A[i] < T1 && (minIndex == -1 || A[i] <= A[minIndex])) {
            minIndex = i;
        }
    }

    //результат
    if (minIndex != -1) {
        std::cout << "The number of last element: " << minIndex << std::endl;
    }
    else {
        std::cout << "Min element don't have" << std::endl;
    }

    return 0;
}
