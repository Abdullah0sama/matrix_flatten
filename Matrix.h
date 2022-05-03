#if !defined(MATRIX_3D)
#define MATRIX_3D

#include <vector>
#include <stdexcept>
template<typename elemType>
class Matrix
{
private:
    typedef unsigned int uint;
    std::vector<elemType> container;
    int firstDim;
    int secondDim;
    int thirdDim;
    // Turn 3d index to 1d index
    int flattenIndex(uint i, uint j, uint k);
public:
    Matrix(uint n, uint m, uint p);
    // Set element in matrix
    void set(uint i, uint j, uint k, const elemType& element);
    // Get element from matrix
    elemType get(uint i, uint j, uint k);
    std::vector<uint> size();
    
};

template<typename elemType>
Matrix<elemType>::Matrix(uint n, uint m, uint p): container(n * m * p) {
    firstDim = n;
    secondDim = m;
    thirdDim = p;    
}

template<typename elemType>
int Matrix<elemType>::flattenIndex(uint i, uint j, uint k) {
    return i * secondDim * thirdDim + j * secondDim + k ;
}

template<typename elemType>
elemType Matrix<elemType>::get(uint i, uint j, uint k) {
    return container[flattenIndex(i, j, k)];
}

template<typename elemType>
void Matrix<elemType>::set(uint i, uint j, uint k, const elemType& element) {
    container[flattenIndex(i, j, k)] = element;
}

#endif // MATRIX_3D
