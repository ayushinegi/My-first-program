
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 
 int main()
 {    char a[10];
      char b[10];
     
     printf("enter");
     gets(a);
     gets(b);
     int l=strlen(b);
     int x=1,c=0;
     
       for(int i=l-1;i>=0;i--)
      {   
          if(a[i]!=b[i])
          c++;
      }
      if(c==l)
      {
      printf("no");
      exit(0);
      }
      for(int i=l-1;i>=0;i--)
      {   
          if(strcmp(a,b)==0)
          {
              printf("\nyes");
              exit(1);
          }
         
         x=b[i]-a[i];
          for(int j=i;j>=0&&x!=0;j--)
          a[j]=a[j]+x;

          
          
          
          
      }
      if(strcmp(a,b)!=0)
      printf("\nno");
      else
      {
          printf("yes");
      }
      

    
     return 0;
 }
 