# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joavitor <joavitor@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/13 13:57:54 by joavitor          #+#    #+#              #
#    Updated: 2021/06/13 13:57:55 by joavitor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

find -iname '*sh' | sed "s/.*\///; s/\.sh//"