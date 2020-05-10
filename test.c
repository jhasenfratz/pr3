#include <stdlib.h>
#include "list.h"
#include <stdio.h>

int main() {
	printf("Select what operation you want to do to the list: \n");
	printf("1.) Insert Head\n");
	printf("2.) Insert Tail\n");
	printf("3.) Delete a node\n");
	printf("4.) Delete all\n");
	printf("5.) Display\n");
	printf("6.) Exit");
	Node * node;
	switch
		case 1: printf("What number would you like to add?\n");
				int x;
				x = getchar();
				List_insert(node, x);
		case 2: printf("What number would you like to add?\n");
				int x;
				x = getchar();
				List_insert_last(node, x);
		case 3: printf("What value would you like to delete?\n");
				int x;
				x = getchar();
				List_delete(node, x);
		case 4: printf("Deleting your list.\n");
				List_destroy(node);
		case 5: printf("Printing your list.\n");
				List_print(node);
		case 6: printf("Goodbye.\n");
				break;
		default: break;
}