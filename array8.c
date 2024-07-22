#include <stdio.h>
  
int main(void)
{
    int numbers[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    size_t rows_count = sizeof(numbers) / sizeof(numbers[0]);           // 3
    size_t columns_count = sizeof(numbers[0]) / sizeof(numbers[0][0]);  // 2
    printf("rows count = %zu \n", rows_count);
    printf("columns count = %zu \n", columns_count);
    // проходим по 3 строкам таблицы
    for(size_t i =0; i < rows_count; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(size_t j =0; j<columns_count; j++)
        {
            printf("numbers[%zu][%zu] = %d \n", i, j, numbers[i][j]);
        }
    }
    return 0;
}