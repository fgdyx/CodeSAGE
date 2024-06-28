#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = 7;
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
static void FUN4()
{
 int VAR2;
 VAR2 = -1;
 fscanf(stdin, "", &VAR2);
 const VAR3& VAR4 = FUN5();
 VAR4.FUN3(VAR2);
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
