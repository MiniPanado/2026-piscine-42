#include <stdbool.h>

// 9  == '\t'
// 13 == '\r'

#define ASCII_SIZE 256

static bool     ft_is_space(char c)
{
        return (c == ' ' || (c >= 9 && c <= 13));
}

static unsigned int     ft_strlen(char *str)
{
        unsigned int    len;

        len = 0;
        while (str[len] != '\0')
        {
                len++;
        }
        return (len);
}

static bool     ft_base_is_valid(char *base)
{
        int             i;
        short   freq[ASCII_SIZE];

        if (!base || *base == '\0' || base[1] == '\0')
                return (false);
        i = 0;
        while (i < ASCII_SIZE)
                freq[i++] = 0;
        i = 0;
        while (base[i] != '\0')
        {
                if (base[i] == '+' || base[i] == '-' || ft_is_space(base[i]))
                        return (false);
                if (++freq[(unsigned char)base[i]] > 1)
                        return (false);
                i++;
        }
        return (true);
}

static int     ft_atoi_base(char *str, char *base)
{
        unsigned int    i;
		unsigned short	base_pos[ASCII_SIZE];
        short           signal;
        unsigned int    res;

		if (ft_is_base_valid(base))
		{
			return (0);
		}
		i = 0;
        while (i < ASCII_SIZE)
                base_pos[i++] = 0;
		i = 0;
		while (base[i] != '\0')
			base_pos = (unsigned short)base[i++];
        i = 0;
        while (ft_is_space(str[i]))
        {
                i++;
        }
        signal = 1;
        while (str[i] == '-' || str[i] == '+')
        {
                if (str[i] == '-')
                {
                        signal = -signal;
                }
                i++;
        }
        res = 0;
        while (base_pos[(unsigned char)])
        {
                res = res * 10 + base[str[i] % ] - '0';
                i++;
        }
        return (res * signal);
}
