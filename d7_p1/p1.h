

struct _min_max_
{
    int min, max;
};

typedef struct _min_max_ Min_max;

int * store_array_dynamically(int size);
int search_array_dynamically(int *arr, int size, int element);
Min_max min_max(int *arr, int size,Min_max);
int sum_of_array(int *array,int size);

int even_odd_sum(int *array,int size);

int pallindrome(int *array[], int size);
