#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

using namespace std;

double matriceA[100][100], matriceB[100][100], matriceC[100][100];
int ligneA, colonneA, ligneB, colonneB;
 

void recuperationMatrice(int ligne, int colonne , double matriceX[100][100]) {


    for ( int i(0); i < ligne ; i++) {
         for ( int j(0); j < colonne ; j++) {
            cout << "Matrice["<<i<<"]["<<j<<"] = " ;
            cin >> matriceX[i][j] ;
        
        }
    }

    cout << "............................................." << endl;
} 

void afficheMatrice( int ligne , int colonne , double matriceX[100][100]) {
   

    for ( int i(0); i < ligne ; i++) {
         for ( int j(0); j < colonne ; j++) { 
            cout << "Matrice["<<i<<"]["<<j<<"] = " << matriceX[i][j] << endl;
        
        }
    }

    cout << "............................................." << endl;
}

void sommeMatrice(int ligne , int colonne, double matriceX[100][100], double matriceY[100][100], double matriceZ[100][100]) {
   
    for (int i(0); i < ligne ; i++) {
        for (int j(0) ; j < colonne ; j++ ) {
            matriceZ[i][j] = matriceX[i][j] + matriceY[i][j];
        }
    }
    cout << "La somme de ces deux matrices est : " << endl ;
    afficheMatrice(ligne, colonne, matriceZ);
}

int main() {
    // matrice A
    cout << "Entrer le nombre de lignes de la matrice A : ";
    cin >> ligneA;
    cout << endl;

    cout << "Entrer le nombre de colonnes de la matrice A : ";
    cin >> colonneA;
    cout << endl;

    cout << "La matrice A :" << endl;

    recuperationMatrice(ligneA, colonneA, matriceA);

    
    // matrice B
    cout << " Entrer le nombre de ligne de la deuxième matrice B : ";
    cin >> ligneB ;
    cout << endl; 

    cout << "Entrer le nombre  sa colonne  : ";
    cin >> colonneB ;
    cout << endl;

    cout << "La matrice B: " << endl ;
    recuperationMatrice(ligneB, colonneB, matriceB);  

    
    sommeMatrice(ligneA, colonneA, matriceA, matriceB,matriceC);

}
