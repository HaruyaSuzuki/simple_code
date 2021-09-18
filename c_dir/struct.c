#include <stdio.h>
#include <string.h>

/*
**	構造体
*/

struct 		student
{
	int			id;
	char		*name;
};

int				main(void)
{
	struct	student student_data;

	student_data.id = 1;
	student_data.name = "name";
	printf("id:%d\nname:%s\n", student_data.id, student_data.name);
	return (0);
}