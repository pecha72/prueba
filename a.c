//#include <iostream>

#include <stdio.h>

int a,a1,a2,a3;

int b = 123,b1 = 234;


//int main(int argc, char* argv[]) 
int mi_main(void) 
{
    //std::cout << "Hello world" << std::endl;

    //mi_main3();


    return 0;
}

int mi_main2(void) 
{
    //std::cout << "Hello world" << std::endl;
    return 0;
}

int main()
{
	printf("sizeof(char): %zu\n", sizeof(char));
	printf("sizeof(short int): %zu\n", sizeof(short int));
	printf("sizeof(int): %zu\n", sizeof(int));
	printf("sizeof(long): %zu\n", sizeof(long));
	printf("sizeof(long long): %zu\n", sizeof(long long));
	printf("sizeof(void*): %zu\n", sizeof(void*));
	printf("sizeof(size_t): %zu\n", sizeof(size_t));
}


/*

// mi prueba
// #include <stdio.h>

//#include<bits/stdc++.h> 
//#include <iostream>
//using namespace std; 

//#include <stdbool.h>


int bubblesort( int *a , int n )
{
    int result = 0;
    int temp; //for swapping
    for (int j = 0 ; j < n - 1 ; j++)
    {
        if ( a[j] > a[j + 1] )
            {
                temp = a[j];
                a[j]=a[j + 1];
                a[j + 1] = temp;
                result = 1;
            }
     }
     return result;     
}

/*
int peter(void)
{
  return 0;
}
int peter(int i)
{
  return i * 2;
}
*/

/*
int main()
{  
  int miinta[10] = {10, 3, 5, 2, 80, 4, 9, 0, 7, 3};

  int miSize = sizeof(miinta) / sizeof(miinta[0]);   

  while(bubblesort(&miinta[0], miSize) == 1);

//  for (int i = 0; i < miSize; i++)
//    cout << miinta[i] << " - ";     

  //return peter(0);
  
  return 0;

}*/
