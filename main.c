//functional calculator


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
unsigned char byte;
int main(int argc,char *argv[]) {
  int val;
  char sourcef[100],clonef[100];
  FILE*source,*clone;


if(argc==2){
  strcpy(sourcef,argv[1]);
  //copies source FILE
  strcpy(clonef,sourcef);
  //cat clone file with .clone extention
  strcat(clonef,".clone");

}
else{
  printf("ERROR");
  exit(0);
}
source=fopen(sourcef,"rb");
if(source==NULL){
  printf("ERROR Null",sourcef);
  exit(1);

}
clone =fopen(clonef,"wb");
if(clone==NULL){
  printf("ERROR Null",clonef);
  exit(1);
}
printf("cloning file",sourcef);
while(1){
  val = fgetc(source);
  if(val == EOF)
  break;
  byte=(unsigned char)val;
  fputc(byte,clone);
}
printf("\n cloned",sourcef,clonef);
return 0;
}