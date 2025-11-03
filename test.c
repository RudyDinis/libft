#include "libft.h"

int main()
{
    printf("isAlpha('D') : %d\n", ft_isalpha('D'));
    printf("isAlpha('0') : %d\n", ft_isalpha('0'));
    printf("isAlpha('$') : %d\n", ft_isalpha('$'));
    
    printf("\n");

    printf("isDigit('D') : %d\n", ft_isdigit('D'));
    printf("isDigit('0') : %d\n", ft_isdigit('0'));
    printf("isDigit('$') : %d\n", ft_isdigit('$'));
        
    printf("\n");

    printf("isAlNum('D') : %d\n", ft_isalnum('D'));
    printf("isAlNum('0') : %d\n", ft_isalnum('0'));
    printf("isAlNum('$') : %d\n", ft_isalnum('$'));
    
    printf("\n");

    printf("isAscii('D') : %d\n", ft_isascii('D'));
    printf("isAscii('0') : %d\n", ft_isascii('0'));
    printf("isAscii(233) : %d\n", ft_isascii(233));

    printf("\n");


    printf("isprint(' ') : %d\n", ft_isprint(' '));
    printf("isprint('A') : %d\n", ft_isprint('A'));
    printf("isprint('\\n') : %d\n", ft_isprint('\n'));

    printf("\n");

    printf("strlen(\"\") : %d\n", ft_strlen(""));
    printf("strlen(\"Test\") : %d\n", ft_strlen("Test"));
    printf("strlen(\"\\n\") : %d\n", ft_strlen("\n"));

    printf("\n");

    
}