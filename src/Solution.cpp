//
// Created by fernudev on 4/24/25.
//

#include "../include/Solution.h"

/**
 * @brief Modifica la matriz dada para que si una celda contiene 0,
 *        toda su fila y columna sean establecidas a 0.
 *
 * Esta operación se realiza en el lugar, sin utilizar espacio adicional
 * más allá de algunas variables booleanas.
 *
 * @param zeroes Una referencia a una matriz de enteros de tamaño m x n.
 */
void Solution::setZeroes(std::vector<std::vector<int>>& zeroes) {
    const int rows = zeroes.size();
    const int cols = zeroes[0].size();
    bool firstRowZero = false;
    bool firstColZero = false;

    // Verifica si la primera fila contiene algún cero
    for (int j = 0; j < cols; j++) {
        if (zeroes[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Verifica si la primera columna contiene algún cero
    for (int i = 0; i < rows; i++) {
        if (zeroes[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Usa la primera fila y columna como marcadores para los ceros
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (zeroes[i][j] == 0) {
                zeroes[i][0] = 0;
                zeroes[0][j] = 0;
            }
        }
    }

    // Establece las celdas correspondientes a cero según los marcadores
    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (zeroes[i][0] == 0 || zeroes[0][j] == 0) {
                zeroes[i][j] = 0;
            }
        }
    }

    // Aplica ceros a la primera fila si es necesario
    if (firstRowZero) {
        for (int j = 0; j < cols; j++) {
            zeroes[0][j] = 0;
        }
    }

    // Aplica ceros a la primera columna si es necesario
    if (firstColZero) {
        for (int i = 0; i < rows; i++) {
            zeroes[i][0] = 0;
        }
    }
}

/**
 * @brief Imprime la matriz en consola.
 *
 * Cada fila se imprime en una nueva línea, y los elementos están separados por espacios.
 *
 * @param matrix Una referencia constante a la matriz a imprimir.
 */
void Solution::printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
