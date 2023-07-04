#include "main.h"

/**
 * set_string - assign the  value of a pointer to a char
 * @s: pointer to pointer we need to set to
 * @to: to set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
