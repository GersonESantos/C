#include <stdio.h>

void twoSum(int* numbers, int numbersSize, int target, int* result) {
    int left = 0;               // Ponteiro inicial
    int right = numbersSize - 1; // Ponteiro final

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            // Retorna os índices ajustados para 1 baseado
            result[0] = left + 1;
            result[1] = right + 1;
            return;
        } else if (sum < target) {
            left++; // Move o ponteiro esquerdo para a direita
        } else {
            right--; // Move o ponteiro direito para a esquerda
        }
    }

    // Se não encontrar a solução
    result[0] = -1;
    result[1] = -1;
}

int main() {
    int numbers[] = {2, 7, 11, 15}; // Array ordenado
    int target = 9;
    int result[2];

    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);

    twoSum(numbers, numbersSize, target, result);

    if (result[0] != -1) {
        printf("Índices encontrados: [%d, %d]\n", result[0], result[1]);
    } else {
        printf("Nenhuma combinação encontrada.\n");
    }

    return 0;
}
