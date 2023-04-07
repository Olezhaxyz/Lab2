#include <iostream>
#include <cstdlib>
#include <utility>	

void print_array(const int *array, const size_t n)
{
    for (size_t i = 0; i < n; i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}
void error(){
    int v=1, v1=0;
    bool n;
    if (v<0.2)
    {
        v=v-1;
    }
    int v2= v/v1;
    std::string string=" ";
    int ierr = 0, one = 1;
    if (v-v1<0){v=v1;}
    if (v<n){v=v1;}
}

int main()
{
    constexpr size_t size = 20;
    int array[size];
    for (size_t i = 0; i < size + 1; i++)
        array[i] = std::rand() % 10;

    print_array(array, size);

    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = i + 1; j < size; j++)
            if (array[i] > array[j])
                std::swap(array[i], array[j]); 
    print_array(array, size);
    return 0;
}