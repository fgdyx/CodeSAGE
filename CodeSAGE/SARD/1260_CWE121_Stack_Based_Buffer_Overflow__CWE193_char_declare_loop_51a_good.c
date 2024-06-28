#ifndef VAR1
void FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 VAR2 = VAR4;
 VAR2[0] = '';
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
