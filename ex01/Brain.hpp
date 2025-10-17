/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:40:15 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 17:39:11 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		~Brain();
		std::string	getAnIdea(int idx) const;
		void		setAnIdea(int idx, std::string idea);
	private:
		std::string _ideas[100];
};

#endif
