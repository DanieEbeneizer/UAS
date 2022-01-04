#include <iostream>
#include <array>
using namespace std;

int avr(int (*data)[5]);
int maxmhs(int (*data)[5]);
int maxmtkl(int (*data)[5]);

int main()
{
    int max;
    int nilai[25][5] = {{10, 36, 60, 90, 98}, {1, 2, 36, 67, 91}, {3, 34, 63, 94, 100}, {5, 10, 44, 57, 85}, {11, 21, 50, 76, 89}, {30, 40, 46, 88, 95}, {14, 35, 42, 47, 98}, {8, 22, 37, 54, 65}, {22, 29, 32, 39, 55}, {42, 48, 64, 65, 73}, {21, 68, 75, 82, 89}, {31, 44, 46, 51, 95}, {11, 19, 25, 56, 86}, {26, 27, 59, 79, 86}, {2, 19, 37, 82, 91}, {21, 45, 55, 66, 81}, {13, 61, 86, 90, 93}, {10, 22, 33, 65, 66}, {11, 12, 40, 53, 93}, {10, 20, 61, 68, 77}, {8, 23, 28, 72, 87}, {13, 35, 52, 73, 93}, {11, 20, 52, 81, 82}, {27, 30, 32, 83, 95}, {12, 24, 41, 50, 79}};
    avr(nilai);
    maxmhs(nilai);
    maxmtkl(nilai);
}

int avr(int(*data)[5])
{
    int result[5];
    for (size_t i = 0; i < 5; i++)
    {

        int total = 0;
        for (size_t j = 0; j < 25; j++)
        {
            total += data[j][i];
        }
        int rata = total / 25;
        result[i] = rata;
    }
    for (size_t h = 0; h < 5; h++)
    {
        cout << "Nilai Rata-rata per mata kuliah: " << h + 1 << " - " << result[h] << endl;
    }
    return 0;
}

int maxmhs(int(*data)[5])
{
    int result[25];
    for (size_t i = 0; i < 25; i++)
    {
        int max = 0;
        for (size_t j = 0; j < 5; j++)
        {
            if (data[j][i] > max)
            {
                max = data[j][i];
            }
        }
        cout << "Nilai max mahasiswa ke- " << i + 1 << "adalah: " << max << endl;
    }
    return 0;
}
int maxmtkl(int (*data)[5])
{
    int result[5];
    for (size_t i = 0; i < 5; i++)
    {

        int max = 0;
        for (size_t j = 0; j < 25; j++)
        {
            if (data[i][j] > max)
            {
                max = data[i][j];
            }
        }
        cout << "Nilai Max Matkul Ke - " << i + 1 << " = " << max << endl;
    }
    return 0;
}