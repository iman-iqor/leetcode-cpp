#include <iostream>

class DynamicArray
{
private:
    int *array;
    int size;
    int _capacity;

public:
    DynamicArray(int capacity)
    {
        array = new int[capacity];
        _capacity = capacity;
        size = 0;
    }

    int get(int i)
    {
        if (i >= 0 && i < size)
            return array[i];
        return 0;
    }

    void set(int i, int n)
    {
        if (i >= 0 && i < size)
        {
            array[i] = n;
        }
        return;
    }

    void pushback(int n)
    {
        if (_capacity > size)
        {
            array[size] = n;
            size++;
        }
        else
        {
            resize();
            pushback(n);
        }
    }

    int popback()
    {
        if (size > 0)
        {
            int pop = array[size - 1];
            array[size - 1] = 0;
            size--;
            return pop;
        }
        return 0;
    }

    void resize()
    {
        int *new_array = new int[_capacity * 2];
        _capacity = _capacity * 2;

        for (int i = 0; i < size; i++)
        {
            new_array[i] = array[i];
        }
        delete[] array;
        array = new_array;
    }

    int getSize()
    {
        return size;
    }

    int getCapacity()
    {
        return _capacity;
    }
};

int main()
{
    DynamicArray Array(1);
    std::cout << Array.getSize() << std::endl;
    std::cout << Array.getCapacity() << std::endl;
    Array.pushback(1);
    Array.pushback(2);
    Array.pushback(3);
    Array.pushback(4);
    Array.pushback(5);
    Array.pushback(6);
    Array.pushback(7);
    Array.pushback(8);
    Array.pushback(9);
    std::cout << Array.getSize() << std::endl;
    std::cout << Array.getCapacity() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.popback() << std::endl;
    std::cout << Array.getSize() << std::endl;
    std::cout << Array.getCapacity() << std::endl;
    return 0;
}