#include<stdio.h> 
#define size 7 //Maximum size of an array
int array[size]; //Global declaration of array 
void init() //init doesnot return a value to the object invoked it
{ 
int i; //Declaration of i
for(i = 0; i < size; i++) //Using for loop
array[i] = -1; //Setting the array value to -1
} 
void insert(int val) //Insert function and passing the parameter val
{ 
int key = val % size; //Intialization of variable key
if(array[key] == -1) //using if else condition
{ 
array[key] = val; //Function call
printf("%d inserted at array[%d]\n", val,key); 
} 
else 
{ 
printf("Collision : array[%d] has element %d already!\n",key,array[key]); 
printf("Unable to insert %d\n",val); 
} 
} 
void del(int val) //Delete function and passing the parameter
{ 
int key = val % size; 
if(array[key] == val) 
array[key] = -1; 
else
printf("%d not present in the hash table\n",val); 
} 
void search(int val) //Searching function
{ 
int key = val % size; 
if(array[key] == val) 
printf("Search Found\n"); 
else 
printf("Search Not Found\n"); 
} 
void print() //printing function
{ 
int i; 
for(i = 0; i < size; i++) 
printf("array[%d] = %d\n",i,array[i]); 
} 
int main() //Main function
{ 
init(); 
insert(10); 
insert(4); 
insert(2); 
insert(3); 
printf("Hash table\n"); 
print(); 
printf("\n"); 
printf("Deleting value 10..\n"); 
del(10); 
printf("After the deletion hash table\n"); 
print(); 
printf("\n"); 
printf("Deleting value 5..\n"); 
del(5); 
printf("After the deletion hash table\n");
print(); 
printf("\n"); 
printf("Searching value 4..\n"); 
search(4); 
printf("Searching value 10..\n"); 
search(10); 
return 0; 
}