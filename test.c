#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    printf("strlen(\"\") : %ld\n", ft_strlen(""));
    printf("strlen(\"Test\") : %ld\n", ft_strlen("Test"));
    printf("strlen(\"\\n\") : %ld\n", ft_strlen("\n"));

    printf("\n");

    /*MEMCPY*/

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
       
    copy = (int *) malloc( length );
    ft_memcpy( copy, array, length );
    printf("memcpy(54, 85, 20, 63, 21) : ");
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );

    /*ft_strlcpy*/

    char dest[] = "";
    char src[]  = "test";
    int res = ft_strlcpy(dest, src, 4);

    printf("ft_strlcpy("", \"test\", 4) dest : %s, return : %d\n", dest, res);
    printf("\n");


    char dest1[6] = "test";
    char src1[] = "42";
    int res1 = ft_strlcat(dest1, src1, 6);

    printf("ft_strlcat(\"test\", \"42\", 6) dest: %s, return: %d\n", dest1, res1);
    printf("\n");

    printf("ft_toupper('c') return: %c\n", ft_toupper('c'));
    printf("ft_tolower('C') return: %c\n", ft_tolower('C'));

    printf("\n");

    //char destination[] = "valide";
    //char *res2 = ft_strchr( destination, 'e' );

    //printf("%s", res2);
    printf("%d\n", ft_atoi("\n120"));
    printf("%d\n", ft_atoi("\n++120"));
    printf("%d\n", ft_atoi("\n-120"));
    printf("%d\n", ft_atoi("\n--120"));

    printf("\n");

    printf("strnstr(\"test\", \"est\", 3) : %s\n", ft_strnstr("test", "est", 3));

    printf("\n");

    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    printf("memcmp :%d ft_memcmp :%d\n", memcmp( array1, array2, size), ft_memcmp( array1, array2, size));       
    printf("memcmp :%d ft_memcmp :%d\n", memcmp( array1, array1, size), ft_memcmp( array1, array1, size));       
    printf("memcmp :%d ft_memcmp :%d\n", memcmp( array2, array1, size), ft_memcmp( array2, array1, size));       
    
    printf("\n");

    
}

