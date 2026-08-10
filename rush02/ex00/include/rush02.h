#ifndef RUSH02_H

# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFFER_SIZE 4096

typedef struct	s_entry
{
	char			*key;
	char			*value;
	struct s_entry	*next;
}	t_entry;

t_entry	*parse_dict(const char *path);
void	free_dict(t_entry *dict);
char	*find_value(t_entry *dict, const char *key);
int		is_valid_number(const char *str);
char	*convert(t_entry *dict, const char *number);
char	*trim(const char *str);

# define ERR_MSG "Error\n"
# define DICT_ERR_MSG "Dict Error\n"

#endif
