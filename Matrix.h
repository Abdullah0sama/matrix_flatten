#if !defined(MATRIX_3D)
#define MATRIX_3D

#include<vector>

template<typename elemType>
class Matrix
{
private:
    std::vector<elemType> container;
    int firstDim;
    int secondDim;
    int thirdDim;
    // Turn 3d index to 1d index
    int flattenIndex(int i, int j, int k);
public:
    Matrix(int n, int m, int p);
    // Set element in matrix
    void set(int i, int j, int k, const elemType& element);
    // Get element from matrix
    elemType get(int i, int j, int k);
};

template<typename elemType>
Matrix<elemType>::Matrix(int n, int m, int p): container(n * m * p) {
    firstDim = n;
    secondDim = m;
    thirdDim = p;
}

template<typename elemType>
int Matrix<elemType>::flattenIndex(int i, int j, int k) {
    return i * secondDim * thirdDim + j * secondDim + k ;
}

template<typename elemType>
elemType Matrix<elemType>::get(int i, int j, int k) {
    return container[flattenIndex(i, j, k)];
}

template<typename elemType>
void Matrix<elemType>::set(int i, int j, int k, const elemType& element) {
    container[flattenIndex(i, j, k)] = element;
}

#endif // MATRIX_3D
