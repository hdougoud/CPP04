/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:15:20 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 16:50:25 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const Character &src);
		Character operator=(const Character &src);
		~Character();
	private:
};
