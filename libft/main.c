/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnovis-a <lnovis-a@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:45:01 by lnovis-a          #+#    #+#             */
/*   Updated: 2024/10/14 08:33:50 by lnovis-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
//STRRCHR
int main()
{
	const char s[] = "leticia";
        char c = 'i';
        printf("%s\n",ft_strrchr(s, c));
		printf("%s",strrchr(s, c));
        return (0);

}*/


//ITOA
int main()
{
	int n = -2;
	char *s;
	s = ft_itoa(n);
	printf ("%s", s);
	return (0);
}

/*
//STRMAPI
static char	*f(unsigned int n, char c)
{
    if (c == '0')
        return ('S');
    if (c == '1')
        return ('2');
}

int main()
{
	char *s;
	s = "leticia";

	ft_strmapi(s, f);
	return 0;
}
*/

/*
#include <stdio.h>
int main ()
{
        const char s[] = "let++gosta+hamburguer";
        char c = '+';
        printf("%s",ft_strchr(s, c));
        return (0);
}*/

/*
//SPLIT
#include <stdio.h>
int main()
{

	char    **ptrs;
        //char *try = ;
        int words = 3;
        ptrs = ft_split("  tripouille  42  ", ' ');
        int i = 0;
        while (i < words)
        {
                if (ptrs[i] == NULL)
                        printf("\nfrase %d :(NULL)\n", i);
                else
                        printf("frase %d :%s\n", i, ptrs[i]);
                i++;
        }

}*/


//MAPPI
/*
static char	*f(unsigned int n, char c)
{
	return (c + n);
}

char addOne(unsigned int i, char c) {return (i + c);}

int main()
{
	char *s;
	s = "leticia";

	ft_strmapi(s, f);
	return 0;
}
*/

/*
//atoi
int     main(void)
{
        char str[] = "+43a 02";
        printf("%d \n", ft_atoi(str));
        printf("%d", atoi(str));
        return (0);
}
*/
