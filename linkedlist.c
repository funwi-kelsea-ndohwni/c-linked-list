#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// definning my node datatype.
struct Node {
	struct Node *previous;
	struct Node *next;
	int data;
	int index;
};

//inserts an item into the list.
void insert_item(struct Node **head, int data, int index);

// removes the first element.
struct Node pop_first(struct Node **head);

// removes the last element of the list
void pop(struct Node **head);

//removes element from a particular index.
void remove_from(struct Node **head, int index);

// print all elements in the list.
void print_list(struct Node *head);

// prints all elements in reversed order
void print_all_reversed(struct Node *head);

// prints the element at a particular index
void print_from(struct Node *head, int index);

// delete all the list.
void delete_all_elements(struct Node *head);

// delete an element at a particular index.
void delete_at(struct Node *head);

// puts a value a number of times at the end of the list.
void put_n_times(struct Node *head,int value, int n);

// puts a value 'n' times starting at a particular index.
void put_n_times_start_at(struct Node *head,int value, int n, int index);

//returns an integer of all numbers in the list added up beginning from the first.
int add_all(struct Node *head);

//subtracts all the elements in the list beginning from the first.
int subtract_all(struct Node *head);

//multiply all elements in the list.
int multiply_all(struct Node *head);

// divide all the elements in the list beginning from the first.
int divide_all_non_zero(struct Node *head);

// reverses the list.
void reverse_list(struct Node *head);

// prints the last item of an array.
int peek(struct Node *head);

// prints the length of the list.
int length(struct Node *head);

// count the number of times an element occurs in the list.
int number_of(struct Node *head, int item);

// checks if an element exist in the list.
// stops when one of the values is found.
bool is_present(struct Node *head, int item);

// prints all the indexes a particular number occupies.
void index_numbers_of(struct Node *head, int item);

// prints the maximum integer in the list.
int max(struct Node *head);

//prints the minimum integer in the list.
int min(struct Node *head);

// delete all repeated elements of a value and leaves just a single value for each node in the list.
int delete_repeated(struct Node *head);

// return a new sorted node.
struct Node sort_list(struct Node *head);

//print the list from a particular index.
void print_from(struct Node *head, int index);

// returns a new list with values in the original list converted to hexadecimal
struct Node to_hex(struct Node *head);

// returns a new list with values in the original list converted to oct
struct Node to_oct(struct Node *head);

// returns a new list with values in the original list converted to binary
struct Node to_bin(struct Node *head);

// returns the size the array occupies in bytes.
int list_size(struct Node *head);

int main(int argc, char *argv[]) {
	printf("hello");
	return 0;
}
