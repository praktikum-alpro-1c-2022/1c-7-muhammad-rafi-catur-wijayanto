#include <iostream>

using namespace std;

int main(){
        int choose;
        cout << "1. Penjumlahan Matriks\n2. Perkalian Matriks\n3. Transpose Matriks\n";
        cin >> choose;

        if(choose == 1 || choose == 2){
                int row1, row2, col1, col2;
                cout << "Masukan Ordo Matriks 1: ";
                cin >> row1 >> col1;
                cout << "Masukan Ordo Matriks 2: ";
                cin >> row2 >> col2;

                int m1[row1][col1];
                int m2[row2][col2];

                cout << "Masukan nilai Matriks 1: ";
                for(int i = 0; i < row1; i++){
                        for(int j = 0; j < col1; j++){
                                cin >> m1[i][j];
                        }
                }

                cout << "Masukan nilai Matriks 2: ";
                for(int i = 0; i < row2; i++){
                        for(int j = 0; j < col2; j++){
                                cin >> m2[i][j];
                        }
                }
                if(choose == 1){
                        int m3 [row1][col1];
                        if(col1 == col2 && row1 == row2){
                                for(int i = 0; i < row1; i++){
                                        for(int j = 0; j < col1; j++){
                                                m3[i][j] = m1[i][j] + m2[i][j];
                                        }
                                }
                        }else{
                                cout << "Syarat penjumlahan Matriks tidak terpenuhi!\n";
                                return 0;
                        }
                        cout << "\nResult:\n\n";
                        for(int i = 0; i < row1; i++){
                                for(int j = 0; j < col1; j++){
                                        cout << m3[i][j] << '\t';
                                }
                                cout << '\n';
                        }

                }else if(choose == 2){
                        int m3[row1][col2];
                        if(col1 == row2){
                                for(int i = 0; i < row1; i++){
                                        for(int j = 0; j < col2; j++){
                                                m3[i][j] = 0;
                                                for(int k = 0; k < col1; k++){
                                                        m3[i][j] += m1[i][k] * m2[k][j];
                                                }
                                        }
                                }
                        }else{
                                cout << "Syarat perkalian Matriks tidak terpenuhi!\n";
                                return 0;
                        }
                        cout << "\nResult:\n\n";
                        for(int i = 0; i < row1; i++){
                                for(int j = 0; j < col2; j++){
                                        cout << m3[i][j] << '\t';
                                }
                                cout << '\n';
                        }
                }
        }else if(choose == 3){
                int row1, col1;
                cout << "Masukan Ordo Matriks 1: ";
                cin >> row1 >> col1;

                int m1[row1][col1];

                cout << "Masukan nilai Matriks 1: ";
                for(int i = 0; i < row1; i++){
                        for(int j = 0; j < col1; j++){
                                cin >> m1[i][j];
                        }
                }
                int m3[col1][row1];
                cout << "\nResult:\n\n";
                for(int i = 0; i < col1; i++){
                        for(int j = 0; j < col1; j++){
                                m3[i][j] = m1[j][i];
                                cout << m3[i][j] << '\t';
                        }
                        cout << '\n';
                }

        }
}
