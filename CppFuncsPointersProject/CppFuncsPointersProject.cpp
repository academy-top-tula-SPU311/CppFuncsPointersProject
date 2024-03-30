#include <iostream>

int sum(int a, int b)
{
    return a + b;
}

int mult(int a, int b)
{
    return a * b;
}

int calc(int a, int b, int(*operation)(int, int))
{
    return operation(a, b);
}

int(*get_oper(char symbol))(int, int)
{
    switch (symbol)
    {
    case '+': return sum;
    case '*': return mult;
    default:
        return nullptr;
    }
}

int main()
{
    auto oper = get_oper('+');
    std::cout << calc(10, 20, oper) << "\n";

    oper = get_oper('*');
    std::cout << calc(10, 20, oper) << "\n";
}
