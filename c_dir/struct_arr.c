#include <stdio.h>
#include <string.h>

/*
**	構造体配列
*/

struct 						student
{
	int							id;
	char						*name;
};

int								main(void)
{
	typedef struct 	student student_data;
	unsigned int 		i;

	student_data data[] = {
		{ 1, "student1" },
		{ 2, "student2" }
	};

	for(i = 0; i < 2; i++) printf("id:%d\nname:%s\n", data[i].id, data[i].name);
	return (0);
}