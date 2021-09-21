#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;

void obzac()
{
	cout << "\n\n//====================================HomeWork====================================//\n\n";
}



//ЗАДАНИЕ 2
// Создание матрицы
int** Create(size_t n, size_t m)
{
    int** M = new int* [n];
    for (size_t i = 0; i < n; ++i)
    {
        M[i] = new int[m];
    }
    return M;
}
// Удаление матрицы
void Free(int** M, size_t n)
{
    for (size_t i = 0; i < n; ++i)
    {
        delete[] M[i];
    }
    delete[] M;
}
//---- ввод матрицы--------------------------------------
void Input(int** M, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            std::cout << "M[" << i << "][" << j << "] = ";
            std::cin >> M[i][j];
        }
    }
}
// заполнение матрицы случайными числами из диапазона [0, 99] -----------
void RandomNumer(int** ebisoft, const size_t squirtenix, const size_t projectsex)
{
    srand((unsigned int)time(0)); // инициализируем ПГСЧ

    for (size_t x = 0; x < squirtenix; x++)
        for (size_t v = 0; v < projectsex; v++)
            ebisoft[x][v] = rand() % 100; // присваиваем СЧ
}
//-------- Печать матрицы ------------------------------------------------
void Print(int** M, size_t n, size_t m) {
    for (size_t i = 0; i < n; ++i) {
        for (size_t j = 0; j < m; ++j) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}


//3+4 ЗАДАНИЕ
void ebat()
{
    string path = "xbox.txt";
    ofstream fout;
    fout.open(path);
    if (!fout.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        string a;
        cin >> a;
        fout << a;
    }
    fout.close();



    string path2 = "playstation.txt";
    ofstream fout1;
    fout1.open(path2);
    if (!fout1.is_open())
    {
        cout << "Ошибка открытия файла!" << endl;
    }
    else
    {
        string a;
        cin >> a;
        fout1 << a;

    }
    fout1.close();

}












int main()
{
    
	setlocale(LC_ALL, "Rus");
	{
		/*HOMEWORK1
        Выделить в памяти динамический одномерный массив 
        типа int. Размер массива запросить у пользователя. 
        Инициализировать его числами степенями двойки: 1, 2, 4, 
        8, 16, 32, 64, 128 … Вывести массив на экран. Не забыть 
        освободить память. =) Разбить программу на функции.
		*/
		obzac();

        int* ebite;
        int n;
        cout << "лупани число своё: ";
        cin >> n;
        ebite = new int[n];
        int temp = 1;
        cout << "получай: ";
        for (size_t i = 0; i < n; i++)
        {
            ebite[i] = temp;
            cout << ebite[i] << " ";
            temp *= 2;
        }
        //для ... есть ограничения, желательно до 30-ти.
        delete[] ebite;
		
	}


    {
        /*HOMEWORK2
        Динамически выделить матрицу 4х4 типа int. 
        Инициализировать ее псевдослучайными числами через 
        функцию rand. Вывести на экран. Разбейте вашу 
        программу на функции которые вызываются из main.
        */
        obzac();

        
        size_t n, m;

        // вводим размерность матрицы
        std::cout << "Введите количество строк матрицы: ";
        std::cin >> n;
        std::cout << "Введите количество столбцов матрицы: ";
        std::cin >> m;

        // выделяем память под матрицу
        int** A = Create(n, m);

        // ввод матрицы
        //Input( A, n, m );
        // заполнение случайными числами (вместо ввода)
        RandomNumer(A, n, m);


        // Вывод матрицы
        Print(A, n, m);

        // освобождаем память, выделенную под матрицу и вектор
        Free(A, n);

        // ждём нажатия клавиши перед выходом из приложения (windows)
        //system( "pause" );

    }


    {
        /*HOMEWORK3
        Написать программу, которая создаст два текстовых 
        файла (*.txt), примерно по 50-100 символов в каждом 
        (особого значения не имеет с каким именно содержимым). 
        Имена файлов запросить у пользователя.
        */
        obzac();
        cout << "task 3 and task 4: " << endl;
        ebat();

    }

    {
        /*HOMEWORK4
        Написать функцию, «склеивающую» эти файлы в 
        третий текстовый файл (имя файлов спросить у 
        пользователя).
        */
        obzac();
        
        string path = "xbox.txt";
        ofstream fout;
        fout.open(path);
        if (!fout.is_open())
        {
            cout << "Ошибка открытия файла!" << endl;
        }
        else
        {
            string a;
            cin >> a;
            fout << a;
        }
        fout.close();



        string path2 = "playstation.txt";
        ofstream fout1;
        fout1.open(path2);
        if (!fout1.is_open())
        {
            cout << "Ошибка открытия файла!" << endl;
        }
        else
        {
            string a;
            cin >> a;
            fout1 << a;

        }
        fout1.close();


    }















}

