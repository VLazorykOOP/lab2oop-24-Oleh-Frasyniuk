#include <iostream>
#include <vector>

int main() {
    int N;

    //розмір масиву
    std::cout << "Enter size of N: ";
    std::cin >> N;

    std::vector<int> A(N);
    double sum = 0;

    //заповнення масиву
    for (int i = 0; i < N; ++i) {
        std::cout << "Enter element A[" << i << "]: ";
        std::cin >> A[i];
        sum += A[i];
    }

    double average = sum / N;

    std::cout << "Averange of element : " << average << std::endl;

    return 0;
}
