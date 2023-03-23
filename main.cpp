#include <iostream>
#include <vector>
using namespace std;


int main() {
    float matrixM[4][4];
    vector<float> vec(4);
    vector<float> result(4);

    cout << "Input the matrix:" << endl;
    for (int i = 0; i < 4; ++i){
        for (int j = 0; j < 4; ++j) {
            cin >> matrixM[i][j];
        }
    }

    cout << endl << "Input the vector:" << endl;
    for (int i = 0; i < vec.size(); ++i) {
        cin >> vec[i];
    }

    cout << endl << "Matrix:" << endl;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << matrixM[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl << "Vector:" << endl;

    for (int i = 0; i < 4; ++i) {
        cout << vec[i] << ' ';
    }

    cout << endl;

    for (int i = 0; i < 4; ++i) {
        result[i] = 0.0f;
        for (int j = 0; j < 4; ++j) {
            result[i] += vec[j] * matrixM[i][j];
        }
    }

    cout << endl << "Result:" << endl;
    for (int i = 0; i < 4; ++i) {
        cout << result[i] << ' ';
    }

    return 0;
}
