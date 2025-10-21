/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:28:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 18:03:10 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Floor
{
	public:
		Floor(const Floor &other);
		static Floor *getInstance(void);
		~Floor();
	private:
		Floor();
		static Floor *_instancePtr;
};

