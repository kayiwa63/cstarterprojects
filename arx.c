#include <stdio.h>

void main()
{
  int MyNumberArray[6]={20,30,60,50,55,30};
  MyNumberArray[1]=45;


      int accessArray=MyNumberArray[1];
      printf("value =%d\n",accessArray);

      char charArray[4]={'a','b','c','d'};

      for (int i=0;i<6;i++)

        printf("element %d = %d \n",i,MyNumberArray[i]);

}

