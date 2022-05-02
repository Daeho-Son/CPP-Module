#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    {
        std::cout << "===== Subject 테스트 =====" << std::endl;
        Array<int> numbers(MAX_VAL);
        int *mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        // SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return (1);
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete[] mirror;
    }
    std::cout << std::endl << std::endl;
    {
        std::cout << "===== Test 1 =====" << std::endl;
        const Array<int> numbers(MAX_VAL);
        std::cout << "size: " << numbers.size() << std::endl;

        for (int i = 0; i < MAX_VAL; i++)
        {
            std::cout << "numbers[" << i << "]: " << numbers[i] << std::endl;
        }
    }
    std::cout << std::endl << std::endl;
    {
        std::cout << "===== Test 2 =====" << std::endl;
        Array<int> numbers1(MAX_VAL);
        Array<int> numbers2(45);
        std::cout << "numbers1.size(): " << numbers1.size() << std::endl;
        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers1[i] = i;
        }
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "numbers1[" << i << "]: " << numbers1[i] << std::endl;
        // }
        // std::cout << "numbers2.size(): " << numbers2.size() << std::endl;
        // std::cout << "# Before" << std::endl;
        // for (int i = 0; i < 45; i++)
        // {
        //     std::cout << "numbers2[" << i << "]: " << numbers2[i] << std::endl;
        // }
        numbers2 = numbers1;
        // std::cout << "# After" << std::endl;
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "numbers2[" << i << "]: " << numbers2[i] << std::endl;
        // }
        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers1[i] = 0;
        }
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "numbers1[" << i << "]: " << numbers1[i] << std::endl;
        // }
        // for (int i = 0; i < MAX_VAL; i++)
        // {
        //     std::cout << "numbers2[" << i << "]: " << numbers2[i] << std::endl;
        // }
    }
    return 0;
}