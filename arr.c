#include <stdio.h>

void main()
{
  int MyNumberArray[3]={20,30,60};

  for(int i=0;i<3;i++)
  {
      int accessArray=MyNumberArray[i];
      printf("value =%d\n",accessArray);
  }

}
