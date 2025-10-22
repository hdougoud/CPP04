/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:28:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 23:03:24 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef class AMateria AMAteria;

class Floor
{
	public:
		Floor();
		Floor(AMAteria *materia);
		Floor(const Floor &src);
		Floor &operator=(const Floor &src);
		~Floor();
	private:
		static Floor	*_first;
		static Floor	*_last;
		Floor			*_next;
		Floor			*_prev;
		AMateria		*_materia;
};

