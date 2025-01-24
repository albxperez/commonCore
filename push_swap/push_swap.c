/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperez-r <aperez-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:39:31 by aperez-r          #+#    #+#             */
/*   Updated: 2025/01/22 19:01:46 by aperez-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int argc, char *argv[])
{
	t_node	stack_a;
	t_node	stack_b;
	char	*arguments[];

	 stack_a = NULL;
	 stack_b = NULL;
	 if(argc == 1 || (argc == 2 && argv[1][0] == '\0'))
	 	return 1;
	else if(argc == 2)
		arguments = ft_slit(argv[1],' ');
	else
		arguments = argv + 1;
	stack_a = fill_stack(arguments, argc);
	if(array_len == 1)
		//error
	stack_b = create_stack();
}

t_node	fill_stack(char **arguments, int argc)
{
	int i;
	t_node stack;

	stack = create_stack();
	i = array_len(arguments) - 1;
	stack -> size = i + 1;
	while(i >= 0)
	{
		long num;
		num = ft_atoi(arguments[i]);	
		if(alredy_exists(num, stack) == 1)
	}
}
t_node	create_stack(void)
{
	t_node stack;

	stack = malloc(sizeof(t_node));
	stack -> top = -1; //  La pila está vacía, por lo que no hay un elemento en la parte superior
	stack -> size = 0; // El número de elementos en la pila es 0, ya que la pila está vacía
	return(stack);
}
int	array_len(char **arguments)
{
	int i;
	i = 0;
	while(arguments[i] != NULL)
		i++;
	return i;
	
}
int alredy_exists(int num, t_node stack)
{
	int i;
	i = stack->top; // índice del "tope"(final)
	while(i >= 0)
	{
		if(stack->pile[i--] == n)
			return 1;
		i--;
	}
	return 0;
}
