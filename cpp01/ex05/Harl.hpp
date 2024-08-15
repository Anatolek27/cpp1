/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akunegel <akunegel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:58:31 by akunegel          #+#    #+#             */
/*   Updated: 2024/08/05 12:08:00 by akunegel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
    private:
        void hdebug(void);
        void hinfo(void);
        void hwarning(void);
        void herror(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

#endif