#include <stdio.h>
int main()
{
   int i;
   int array[] = {11,22,33,44};
   long l_array[] = {123,234,345,456};
   char c_array[] = {'a','b','c','d'};
   double d_array[] = {1e-3, 2e-3, 3e+5, 4e+5};
   char *str_array[] = {"A","BC","DEF","GHIJKL"};
   char c_2d_array[][10] = {"a","bcdef","gh","ijk"};



   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %d\n",i,&array[i],array[i]);
   printf("\n%p\n",array);

   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %d\n",i,&l_array[i],l_array[i]);
   printf("\n%p\n",l_array);

   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %c\n",i,&c_array[i],c_array[i]);
   printf("\n%p\n",array);

   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %d\n",i,&d_array[i],array[i]);
   printf("\n%p\n",array);

   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %s\n",i,&str_array[i],str_array[i]);
   printf("\n%p\n",str_array);

   for(i = 0 ; i < 4 ; i++)
     printf( "%d %p %s\n",i,&c_2d_array[i],c_2d_array[i]);
   printf("\n%p\n",c_2d_array);



   return 0;
}
