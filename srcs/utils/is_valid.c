/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbertran <lbertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 15:18:41 by lbertran          #+#    #+#             */
/*   Updated: 2021/01/08 09:56:06 by lbertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	is_valid_type(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
			|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	is_valid_flag(char c)
{
	return (c == '0' || c == '*' || c == '-' || c == '.');
}
