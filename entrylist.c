#include "common.h"
#include "shell.h"

#ifndef NULL
#define NULL	( ( void* )0 )
#endif

int init_entry_list(SHELL_ENTRY_LIST* list)
{
	list->count = 0;
	list->first = NULL;
	list->last = NULL;
	return 0;
}

int add_entry_list(SHELL_ENTRY_LIST* list, SHELL_ENTRY_LIST_ITEM* new)
{
	//if(list) return -1;
	//if(new) return -1;

	if(list->count == 0) {
		list->first = new;
		list->last = new;
	}

	else {
		list->last->next = new;
		list->last = new;
	}

	new->next = NULL;
	list->count += 1;
	//printf("add %s\n", list->last->entry.name);
	return 0;
}

int release_entry_list(SHELL_ENTRY_LIST* list)
{
	SHELL_ENTRY_LIST_ITEM* item1;
	SHELL_ENTRY_LIST_ITEM* item2;

	item1 = list->first;

	while(item1){
		item2 = item1->next;
		free(item1);
		item1 = item2;
	}

	return 0;
}

