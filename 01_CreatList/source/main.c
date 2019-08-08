#include <stdio.h>

#include <stdint.h>

struct node
{
	uint32_t value;
	struct node *next;
};
struct node {

};
int32_t init_list(struct node *head)
{
	if (head != NULL)
    {
	    return -1;
	}
	return 0;
}

int main(int argc, char *argv[])
{
	printf("The list test start!\r\n");

}
