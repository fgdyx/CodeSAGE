#ifndef VAR1
void FUN1();
static void FUN2()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 VAR2 = VAR4;
 VAR2[0] = '';
 VAR5 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
