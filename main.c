/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 21:08:21 by anolivei          #+#    #+#             */
/*   Updated: 2020/01/28 00:25:24 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "headers/libft.h"

int	main(void)
{
	// MEMSET
	char str1[30] = "the bright side of life";
	char str2[30] = "the bright side of life";

	memset(str1, 'x', 30);
	printf("\nMEMSET ORIGINAL ALL: %s\n", str1);
	ft_memset(str2, 'x', 30);
	printf("MEMSET LIB ALL: %s\n", str2);

	char str3[30] = "the bright side of life";
	char str4[30] = "the bright side of life";

	memset(str3, 'x', 3);
	printf("MEMSET ORIGINAL 3: %s\n", str3);
	ft_memset(str4, 'x', 3);
	printf("MEMSET LIB 3: %s\n\n", str4);


	//BZERO
	char str5[30] = "the bright side of death";
	char str6[30] = "the bright side of death";

	bzero(str5 + 2, 5);
	printf("BZERO ORIGINAL: %s\n", str5);
	ft_bzero(str6 + 2, 5);
	printf("BZERO LIB: %s\n\n", str6);

	//MEMCPY
	char dst1[50] = "the bright side of deathfffffffffffffffffff";
	char dst2[50] = "the bright side of deathffffffffffffffff";
	char src1[50] = "AAAA";
	char src2[50] = "BBBBBBBBBBBB";	

	memcpy(dst1, src1,  4);
	printf("MEMCPY ORIGINAL: %s\n", dst1);
	ft_memcpy(dst2, src1, 4);
	printf("MEMCPY LIB: %s\n\n", dst2);

	memcpy(dst1, src2,  25);
	printf("MEMCPY ORIGINAL: %s\n", dst1);
	ft_memcpy(dst2, src2, 25);
	printf("MEMCPY LIB: %s\n\n", dst2);

	//MEMCCPY
	char dst3[50] = "the bright side of death";
	char dst4[50] = "the bright side of death";
	char src3[50] = "AAAA";
	char src4[50] = "BBBBBBBBBBBB";	

	memccpy(dst3, src3, 's', 4);
	printf("MEMCCPY ORIGINAL: %s\n", dst3);
	ft_memccpy(dst4, src3, 's', 4);
	printf("MEMCCPY LIB: %s\n\n", dst4);

	memccpy(dst3, src4, 's',  25);
	printf("MEMCCPY ORIGINAL: %s\n", dst3);
	ft_memccpy(dst4, src4, 's', 25);
	printf("MEMCCPY LIB: %s\n\n", dst4);
	
	//MEMMOVE
	char src5[] = "stackoverflow";
    char *dst_1, *dst_2, *dst_3, *dst_4;
    dst_1 = src5;
    dst_2 = src5;
	dst_3 = src5;
	dst_4 = src5;

   	memcpy(dst_1+5, dst_1, 7);
	printf("MEMCPY ORIGINAL: %s\n", dst_1);
	ft_memcpy(dst_2+5, dst_2, 7);
	printf("MEMCPY LIB: %s\n", dst_2);
	memmove(dst_3+5, dst_3, 7);
	printf("MEMMOVE ORIGINAL: %s\n", dst_3);
	ft_memmove(dst_4+5, dst_4, 7);
	printf("MEMMOVE LIB: %s\n\n", dst_4);

	//STRLEN
	printf("STRLEN ORIGINAL: %lu\n", strlen("angelica"));
	printf("STRLEN LIB: %lu\n\n", ft_strlen("angelica"));

	//ATOI
	printf("ATOI ORIGINAL: %d\n", atoi("\t\n\r\v\f-+457895gfaaf"));
	printf("ATOI LIB: %d\n\n", atoi("\t\n\r\v\f-+457895gfaaf"));

	//STRNCMP
	printf("STRNCMP ORIGINAL: %d\n", strncmp("abcdefgh", "abcdwxyz", 4));
	printf("STRNCMP LIB: %d\n\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));

	//STRRCHR
	printf("STRRCHR ORIGINAL: %s\n", strrchr("abcdefgh", 'a'));
	printf("STRRCHR LIB: %s\n\n", ft_strrchr("abcdefgh", 'a'));

	//STRLCPY
//	printf("STRLCPY ORIGINAL: %zu\n", strlcpy("abcdefgh", 0, 15));
//	printf("STRLCPY LIB: %zu\n\n", ft_strlcpy("abcdefgh", 0, 15));

	//SPLIT
	char **split;
	split = ft_split("aloha", 'h');
	printf("SPLIT: %s", split[0]);


}
