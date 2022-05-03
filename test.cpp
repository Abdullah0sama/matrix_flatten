#include"./Matrix.h"

#include<iostream>
#include<string>
using namespace std;

int main() {

    int n = 3, m = 5, p = 4;

    Matrix<int> mat(n, m, p);
    
    auto size = mat.size();
    printf("Size: %u * %u * %u\n", size[0], size[1], size[2]);

    int x = 0;
    for(int i = 0; i < size[0]; ++i)
        for(int j = 0; j < size[1]; ++j)
            for(int k = 0; k < size[2]; ++k)
                mat.set(i, j, k,  x++);

    for(int i = 0; i < size[0]; ++i){
            for(int j = 0; j < size[1]; ++j){
                for(int k = 0; k < size[2]; ++k){
                    cout << mat.get(i, j, k) << " - ";
                }
                cout << " / ";
            }
            cout << endl;
    }

    mat.get(5, 5, 5);
}