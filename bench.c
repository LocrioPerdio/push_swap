void	count_op(t_stats *stats, char *op)
{
	if (!stats)
		return ;
	stats->total++;
	if (!ft_strcmp(op, "sa"))
		stats->sa++;
	else if (!ft_strcmp(op, "sb"))
		stats->sb++;
	else if (!ft_strcmp(op, "ss"))
		stats->ss++;
	else if (!ft_strcmp(op, "pa"))
		stats->pa++;
	else if (!ft_strcmp(op, "pb"))
		stats->pb++;
	else if (!ft_strcmp(op, "ra"))
		stats->ra++;
	else if (!ft_strcmp(op, "rb"))
		stats->rb++;
	else if (!ft_strcmp(op, "rr"))
		stats->rr++;
	else if (!ft_strcmp(op, "rra"))
		stats->rra++;
	else if (!ft_strcmp(op, "rrb"))
		stats->rrb++;
	else if (!ft_strcmp(op, "rrr"))
		stats->rrr++;
}
