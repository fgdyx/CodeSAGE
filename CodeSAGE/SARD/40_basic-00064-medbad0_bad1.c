void FUN1(char * VAR1)
{
 /* BAD */
 VAR1[17] = '';
}
int main(int argc, char *argv[])
{
 void (*VAR2)(char *);
 char VAR1[10];
 VAR2 = VAR3;
 FUN2(VAR1);
 return 0;
}
