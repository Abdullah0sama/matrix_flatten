# Matrix Flatten
A 3D matrix using 1D vector

## Using Matrix

Instantiating a Matrix object

    int n = 3, m = 5, p = 4;
    Matrix<int> mat(n, m, p);
    
.size() member function:

    auto size = mat.size();
    printf("Size: %u * %u * %u\n", size[0], size[1], size[2]);
    // output: Size: 3 * 5 * 4

.set(i, j, k, element) and .get(i, j, k) member functions
      
    mat.set(2, 3, 2, 100);
    cout << mat.get(2, 3, 2) << endl;
    // output: 100
    
    mat.set(3, 5, 2, 200);
    // output: terminate called after throwing an instance of 'std::out_of_range'
               what():  Trying to access an element out of range

    
