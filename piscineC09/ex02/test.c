/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:46:18 by npatthan          #+#    #+#             */
/*   Updated: 2021/11/10 19:49:03 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argc, char **argv)
{
	int		index;
	char	**split;

	argc = argc + 0;
	printf("Case: \"%s\" \"%s\"\n", argv[1], argv[2]);
	printf("------Time--To--SPLIT-------\n");
	split = ft_split(argv[1], argv[2]);
	index = 0;
	printf("TAB start\n");
	while (split[index])
	{
		printf("tab[%d]: #%s#\n", index, split[index]);
		index++;
	}
	printf("TAB end\n");
}
