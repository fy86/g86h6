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
int isAlive(char *paddr)
{
  int ret=0;
  char *pfa="a001.txt";
  char buf[100];
  FILE *fp;
  int n=0;

  fp=fopen(pfa,"rt");
  if(NULL==fp){
    printf("alive file %s not found\n",pfa);
    return 0;
  }
  for(;;){
    n=fscanf(fp,"%s",buf);
    if(1!=n)break;
    if(0==strcasecmp(paddr,buf)){
      ret = 1;
      break;
    }
  }

  fclose(fp);
  return ret;
}
int un2a()
{
  return 0;
}
int main(int argc,char *argv[])
{

  isAlive("::1");

  printf("1a : ret: %d\n",isAlive("1a"));
  printf("11aA : ret: %d\n",isAlive("11aA"));
  return 0;
}

