#include <iostream>
using namespace std;

void twoSum(int arr[], int length, int target)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; i < length; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                std::cout << i << j << std::endl;
                return;
            }
        }
    }
    std::cout << "No element" << std::endl;
}

int main()
{
    int array[] = {3, 5, -4, 8, 11, 1, -1, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int target = 10;
    twoSum(array, length, target);
    return 0;
}

// #include <iostream>

// void twoSum(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 std::cout << "Indices: " << i << ", " << j << std::endl;
//                 return;
//             }
//         }
//     }
//     std::cout << "No two elements sum up to the target." << std::endl;
// }

// int main()
// {
//     int arr[] = {3, 5, -4, 8, 11, 1, -1, 6};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int target = 10;

//     twoSum(arr, size, target);

//     return 0;
// }
