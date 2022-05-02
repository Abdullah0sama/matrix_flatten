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
    void set(int i, int j, int k, elemType element);
    // Get element from matrix
    elemType get(int i, int j, int k);
};


#endif // MATRIX_3D
