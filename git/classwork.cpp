#include<iostream>
void destroy (int **mtx, size_t created)
    {
        for (size_t i =0; i < created; i++)
        {
            delete[] mtx[i];
        }
    }
void input(int**mtx, size_t rows, size_t cols)
{
for (size_t i=0; i < rows; ++i)
    {
        for (size_t j=0; j < cols; ++j)
    {
        std::cin >> mtx[i][j];
    }
    }
}
void consruct()
{

}
int** create()
{

}
int ** create(size_t rows, size_t cols)
{
    int **mtx =new int * [rows];
    size_t created =0;
    try 
    {
        for (; created <rows; ++created)//for (size_t i=0; i <rows; ++i)
        {
            mtx[created] = 0;
        };
    }
catch(const std::bad_alloc & e)
{
    destroy(mtx,created);
    throw;
}
return mtx;

}
int ** construct(int **mtx, int init, size_t cols, size_t rows)
{
    for (size_t i=0; i < rows; ++i)
    {
        for (size_t j=0; j < cols; ++j)
        {
            mtx[i][j] = init;
        }
    }
}
int main()
{
    size_t r =0, c = 0;
    std::cin >> r >> c;
    if (!std::cin)
    {
        std::cerr << "invalid input";
        return 2;
    }
    int **matrix = nullptr;
    try 
    {
        matrix = create(5,5);
    }
    catch (const std::bad_alloc & e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "created!\n";
    construct(matrix,2,r,c)
input (matrix,r,c);
if (!std::cin)
    {
        std::cerr << "input error\n";
        return 1;
    }
destroy(matrix,5);
}