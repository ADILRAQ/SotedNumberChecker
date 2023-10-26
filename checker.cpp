/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araqioui <araqioui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:53:08 by araqioui          #+#    #+#             */
/*   Updated: 2023/10/26 13:18:20 by araqioui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

static int	checker(std::vector<int> &vec)
{
	std::vector<int>::iterator	it = vec.begin() + 1;
	std::vector<int>::iterator	ite = vec.end();

	while (it != ite && *it >= *(it - 1))
		++it;
	return(it == ite);
}

int main(int ac, char **av)
{
	std::vector<int>	vec;
	int	i = 1;

	if (ac == 1)
		return (1);
	while (i < ac)
		vec.push_back(atoi(av[i++]));
	if (checker(vec))
		std::cout << "ALL SORTED!" << std::endl;
	else
		std::cout << "OPS SOEMTHING WRONG!" << std::endl;
}