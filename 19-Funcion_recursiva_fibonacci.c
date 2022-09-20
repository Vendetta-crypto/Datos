int fibonacci(int n)
{
    if ((n == 0) || (n == -1))
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int valor;
    printf("0");
    printf("\n1");
    printf("\n1");

    for (valor = 1; valor <= 20; valor++)
    {
        printf("\n%d", fibonacci(valor));
    }
    return 0;
}