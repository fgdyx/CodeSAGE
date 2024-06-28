#ifndef VAR1
void FUN1(char VAR2);
static void FUN2()
{
 char VAR2;
 void (*VAR3) (char) = VAR4;
 VAR2 = '';
 VAR2 = 2;
 FUN3(VAR2);
}
void FUN4(char VAR2);
static void FUN5()
{
 char VAR2;
 void (*VAR3) (char) = VAR5;
 VAR2 = '';
 fscanf (stdin, "", &VAR2);
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
