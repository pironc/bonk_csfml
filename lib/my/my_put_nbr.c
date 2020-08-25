/*
** EPITECH PROJECT, 2019
** my_put_nbr
** File description:
** File that displays a number
*/

char my_putchar(char c);

void my_number(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{
    int result;
    if (nb == -2147483648) {
        my_number();
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        result = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(result + '0');
    } else {
        my_putchar(nb + '0');
    }
}