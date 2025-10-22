/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SFloor.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:28:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/22 10:54:16 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef class AMateria AMAteria;

class Floor
{
	public:
		Floor(const Floor &other);
		static Floor *getInstance(void);
		~Floor();
		bool dropItemOnFloor(AMateria *dropped);
	private:
		Floor();
		static Floor	*_instancePtr;
		AMateria		*_dropped[100];
};

