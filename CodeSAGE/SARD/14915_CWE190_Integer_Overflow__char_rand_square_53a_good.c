#ifndef VAR1
void FUN1(char VAR2);
static void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = 2;
 FUN1(VAR2);
}
void FUN3(char VAR2);
static void FUN4()
{
 char VAR2;
 VAR2 = '';
 VAR2 = (char)FUN5();
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
