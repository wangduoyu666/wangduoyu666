#include<stdio.h>   //算法很重要的，先从算法和黑客开始，我tik回来了  2022.11.12
#include<string.h>
#include<memcopy.h>
int *findSubstring(char *s, char **words,int wordSize, int *reutrnSize){
  s=(char *)malloc(5000);
  words=(char **)malloc(4000);
  int b=wordsSize;
  char *a;
  char *c;
  int clength;
  int g;
  int alength=g;
  for(g=0;g<30;g++){
    char *a[g];
    strcpy(c,a[g]);
    printf("%s",c);
    int d;
    d=strlen(c);
    int ls=strlen(s);
    int *res=(int *)malloc(sizeof(int)*d);
    for(clength=0;clength<3500;clength++){
      int e;
      int start=e;
      char *f;
      char *c[clength];
      f=strcat(c[clength],c[clength+1]);
      f=strcat(c[clength-1],c[clength]);
      f=strcat(c[clength-1],c[clength+1]);
      f=strcat(c[clength+1],c[clength-1]);
      for(b=0;b<4000;b++){
        int h;
        h=strcmp(*words,c[clength]);//maybe I should use another function to look the words not the function strcmp 
        if(h=0)
          printf("%s", *words);
      }
      int slength;
      for(slength=0;slength<5000;slength++){
        char *i;
        i=strstr(s, f);
        int n=-1;
        for(int j=0;s[j]!='\0';j++){
        n=-1;
        for(int k=0;i[k]!='\0';k++){
        if(s[j+k]!=i[k]){
        n=-1;
        break;
      }
      n=j;
    }
    if(n!=-1){
    break;
    }
    }
    printf("%d\n",n);
    return 0;
    }
    
