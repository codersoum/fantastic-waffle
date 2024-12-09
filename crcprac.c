#include<stdio.h>
int data[20],gen[20],gl,dl,temp[20];
void xor()
{
  for(int i=0;i<gl;i++)
  {
    temp[i]=temp[i]^gen[i];
  }
}
void left_shift()
{
  int ch=temp[0];
  for(int i=0;i<gl-1;i++)
  {
      temp[i]=temp[i+1];
  }
  temp[gl-1]=ch;
}
void generate(int data[],int gen[])
{
  for(int i=dl;i<dl+gl-1;i++)
  {
    data[i]=0;
  }
  for(int i=0;i<gl;i++)
  {
    temp[i]=data[i];
  }
  int pick=gl;
  while(pick<dl+gl-1)
  {
    if(temp[0]==1)
    xor();
    left_shift();
    temp[gl-1]=data[pick];
    pick++;
  }
  printf("The generated crc code\n");
  for(int i=0;i<gl;i++)
  {
    data[dl+i]=temp[i];
  }
  for(int i=0;i<dl+gl-1;i++)
  {
    printf("%d",data[i]);
  }
}

void main()
{
  printf("Cyclic Redundancy check crc 12");
  printf("Enter frame length");
  scanf("%d",&dl);
  printf("The frame is ----\n");
  for(int i=0;i<dl;i++)
  {
    scanf("%d",&data[i]);
  }
  printf("Enter generator length");
  scanf("%d",&gl);
  printf("The generator is ----\n");
  for(int i=0;i<gl;i++)
  {
    scanf("%d",&gen[i]);
  }
  printf("Generating the crc code\n");
  generate(data,gen);
}
