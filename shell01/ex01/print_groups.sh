# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 13:57:48 by joavitor          #+#    #+#              #
#    Updated: 2021/06/13 13:57:49 by joavitor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

groups $FT_USER | tr ' ' ',' | tr -d '\n'