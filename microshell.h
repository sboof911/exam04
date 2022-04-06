/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaach <amaach@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:42:48 by amaach            #+#    #+#             */
/*   Updated: 2022/04/06 00:43:09 by amaach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MICROSHELL_C
# define MICROSHELL_C

# include <unistd.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <string.h>

typedef struct s_tokens
{
    char **cmds;
    int std_out;
    int std_in;
    struct s_tokens *next;
}        t_tokens;

#endif