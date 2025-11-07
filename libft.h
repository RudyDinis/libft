/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdinis <rdinis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:35:04 by rdinis            #+#    #+#             */
/*   Updated: 2025/11/07 12:47:38 by rdinis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <assert.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
size_t ft_strlcpy (char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char * ft_strchr( const char * string, int searchedChar );
int ft_atoi( const char * src );
char * ft_strnstr(const char *big, const char *little, size_t len);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size );
int ft_strncmp( const char * first, const char * second, size_t length );
char * ft_strrchr( const char * string, int searchedChar );
void * ft_calloc( size_t elementCount, size_t elementSize );
char *ft_strdup(const char *string);

#endif