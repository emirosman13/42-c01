#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ft_rev_int_tab(int *tab, int size)
{
    /// 12345 array input
    /// 54321 array output
    int i = 0;
    while (i < (size / 2))
    {
        ft_swap(&tab[i], &tab[size - i - 1]);
        i++;
    }
}

int main(void)
{
    int mahmut[] = {1, 2, 3, 4, 5,};

    int size = 5;
    int j = 0;
    while(j < size)
    {
        printf("%d", mahmut[j++]);
    }

    printf("\n");
    

    ft_rev_int_tab(mahmut, size);

    int i = 0;
    while(i < size)
    {
        printf("%d", mahmut[i++]);
    }



}
