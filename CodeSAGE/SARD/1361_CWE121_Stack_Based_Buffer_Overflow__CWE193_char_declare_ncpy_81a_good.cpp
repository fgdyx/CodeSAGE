#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 VAR2 = VAR4;
 VAR2[0] = '';
 const VAR5& VAR6 = FUN2();
 VAR6.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
