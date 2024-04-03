#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10; 
    int arr[size]; 

    
    srand(time(0)); 
    for (int i = 0; i < size; i++) 
    {
        arr[i] = rand() % 100; 
    }

  
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

   
    std::cout << "Минимальный элемент: " << min ;
    std::cout << "Максимальный элемент: " << max ;

    return 0;
}






#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int* arr, n, sum, limit;
    sum = 0;

    cout << "Введите размер массива: ";
    cin >> n;

    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]= ";
        cin >> arr[i];
    }

    cout << "Введите значение, меньше которого нужно найти сумму: ";
    cin >> limit;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < limit)
        {
            sum += arr[i];
        }
    }

    cout << "Сумма элементов, значения которых меньше " << limit << ": " << sum;

    return 0;
}



#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int profits[12];

    
    for (int i = 0; i < 12; i++) 
    {
        cin >> profits[i];
    }

    int start, end; 
    cin >> start >> end;

    int maxIndex = start - 1, minIndex = start - 1; 

    int maxProfit = profits[start - 1], minProfit = profits[start - 1];

    for (int i = start - 1; i < end - 1; i++)
    { 

        if (profits[i] > maxProfit) 
        { 
            maxProfit = profits[i];
            maxIndex = i;
        }

        if (profits[i] < minProfit)
        { 
            minProfit = profits[i];
            minIndex = i;
        }
    }

    cout << "Месяц с максимальной прибылью: " << maxIndex + 1;
    cout << "Месяц с минимальной прибылью: " << minIndex + 1;

    return 0;
}

