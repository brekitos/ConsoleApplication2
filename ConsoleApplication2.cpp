
#include <iostream>
#include <time.h>


int main()
{ 
    using namespace std;

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);

    int day = buf.tm_mday;
    const int N = 10;
    int sum = 0;
   
    // создание и наполнение массива
    int array[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            array[i][j] = i + j;   
        }
    }


    //вывод массива в консоль и подсчет суммы строки по заданному условию
    for (int i = 0; i < N; i++)
    {
      for(int j=0; j < N; j++)
      {
          cout << array[i][j] << " ";   
      }
      cout << '\n';
      sum += array[day % N][i];
    }
    cout << "The index of the row for calculating the sum of the elements - " << day % N << "\n" << "The sum of the row = " << " " << sum;

    
        

    

   
}