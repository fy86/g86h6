#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int nSame(char *p1,char *p2)
{
  int ret=0;
  int i;

  int len1,len2;
  int n;

  len1=strlen(p1);
  len2=strlen(p2);
  if(len1<len2) n=len1;
  else n=len2;

  for(i=0;i<n;i++){
    if( p1[i] == p2[i] ) ret++;
    else break;
  }

  return ret;
}

int main(int argc,char *argv[])
{


  return 0;
}

