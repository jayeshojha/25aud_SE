#include <iostream>

class Matrix {
private:
    int size;
    int* data;

public:
    Matrix(int n) : size(n) {
        data = new int[n];
    }

    
    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            std::cerr << "Matrix sizes are not compatible for addition!" << std::endl;
            exit(1);
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    void inputMatrix() {
        std::cout << "Enter elements of the matrix:" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cin >> data[i];
        }
    }

    void displayMatrix() {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }

    ~Matrix() {
        delete[] data;
    }
};

int main() {
    int n;
    std::cout << "Enter the size of the matrices: ";
    std::cin >> n;

    Matrix matrix1(n);
    Matrix matrix2(n);

    std::cout << "Matrix 1:" << std::endl;
    matrix1.inputMatrix();

    std::cout << "Matrix 2:" << std::endl;
    matrix2.inputMatrix();

    Matrix result = matrix1 + matrix2;

    std::cout << "Matrix 1: ";
    matrix1.displayMatrix();

    std::cout << "Matrix 2: ";
    matrix2.displayMatrix();

    std::cout << "Matrix 1 + Matrix 2: ";
    result.displayMatrix();

    return 0;
}

