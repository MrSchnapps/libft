/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marandre <marandre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 12:35:18 by jtoty             #+#    #+#             */
/*   Updated: 2019/10/10 15:58:06 by marandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "../../../libft.h"

void	ft_print_result(char const *s)
{
	int		len;
	
	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int		main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*substr;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(substr = ft_substr(str, 0, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(substr);
		if (str == substr)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		if (!(substr = ft_substr(str, 7, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(substr);
		if (str == substr)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		if (!(substr = ft_substr(str, 7, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(substr);
		if (str == substr)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		if (!(substr = ft_substr(str, 0, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(substr);
		if (str == substr)
			ft_print_result("\nA new string was not returned");
	}
	return (0);
}
