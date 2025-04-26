#include <iostream>
#include <vector>
#include "./include/Solution.h"

int main() {

    std::vector<std::vector<int> > matrix(3, std::vector<int>(3));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> matrix[i][j];
        }
    }

    Solution::printMatrix(matrix);
    std::cout << std::endl;

    Solution::setZeroes(matrix);

    std::cout << std::endl;
    Solution::printMatrix(matrix);

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.