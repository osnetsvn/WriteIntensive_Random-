#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	if(argc < 2)
		printf("Enter the Working Set Size\n");
	else{
		int *arr;
		int num_elt;
		int random_numbers;
		num_elt=atoi(argv[1])*1024*256;
		arr=(int *) malloc(sizeof(int)*num_elt);
		for(int i=0; i<num_elt; i++){
			random_numbers = rand()%4294967295;
			arr[i] = random_numbers;
		}
		free(arr);
	}
return 1;
}
