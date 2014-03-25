/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_word.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmartin <mmartin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/03 12:29:44 by mmartin           #+#    #+#             */
/*   Updated: 2014/03/25 18:53:04 by amorfan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lexer.h"

char    *ft_search_word(char **str, int i, char c)
{
    int         j;
    char        *tmp;

    if ((*str)[i] && (*str)[i] == c)
        i++;
    if ((*str)[i] && (*str)[i] == c)
        i++;
    j = i;
    while ((*str)[j] == ' ')
        j++;
    while ((*str)[j] != ' ' && ft_check_tok((*str)[j]) && (*str)[j])
        j++;
    tmp = ft_strndup((*str) + i, j - i);
    while (i < j)
    {
        (*str)[i] = ' ';
        i++;
    }
    return (tmp);
}
