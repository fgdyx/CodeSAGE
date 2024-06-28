#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
void FUN4()
{
 FUN1();
}
#endif
