#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 void (*VAR3) (char *) = VAR4;
 char VAR5[10];
 char VAR6[10+1];
 VAR2 = VAR6;
 VAR2[0] = '';
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
