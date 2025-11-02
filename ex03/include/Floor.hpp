/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:50:12 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 21:33:16 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class AMateria ;

# define FLOOR_SIZE 100

class Floor
{
	public:
		static Floor &getInstance(void);
		~Floor();
		bool	dropMateria(AMateria *materia);
	private:
		Floor();
		AMateria		*_dropped[FLOOR_SIZE];
};
