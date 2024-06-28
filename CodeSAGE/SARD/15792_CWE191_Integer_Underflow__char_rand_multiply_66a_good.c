#ifndef VAR1
void FUN1(char VAR2[]);
static void FUN2()
{
 char VAR3;
 char VAR2[5];
 VAR3 = '';
 VAR3 = -2;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(char VAR2[]);
static void FUN4()
{
 char VAR3;
 char VAR2[5];
 VAR3 = '';
 VAR3 = (char)FUN5();
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
