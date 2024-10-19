/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unit_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohammedmad <mohammedmad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:58:21 by mohammedmad       #+#    #+#             */
/*   Updated: 2024/10/02 16:03:29 by mohammedmad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
using namespace std;
int main()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    std ::cout << "Time: " << 1900 + ltm->tm_year << std ::endl;
}