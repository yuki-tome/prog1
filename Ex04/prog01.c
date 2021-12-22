    #include <stdio.h>
     
    int main()
    {
      int n = 123;
      int *p = &n;
     
      printf("(a) %d\n", n);
      printf("(b) %p\n", &n);
      printf("(c) %p\n", p);
      printf("(d) %d\n", *p);
      printf("(e) %p\n", &p);
     
      return 0;
    }
