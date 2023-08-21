/**
* swap_int - swap_int
* @a: input 1
* @b: input 2
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
