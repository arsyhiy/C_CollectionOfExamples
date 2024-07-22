#include <stdio.h>
 
int main(void)
{
    int numbers[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    // проходим по 3 строкам таблицы
    for(int i =0; i < 3; i++)
    {
        // проходим по 2 столбцам каждой строки
        for(int j =0; j<2; j++)
        {
            printf("numbers[%d][%d] = %d \n", i, j, numbers[i][j]);
        }
    }
    return 0;
}