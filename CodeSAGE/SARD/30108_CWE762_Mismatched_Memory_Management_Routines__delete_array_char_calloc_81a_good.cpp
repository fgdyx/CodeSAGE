#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 const VAR3& VAR4 = FUN5();
 VAR4.FUN3(VAR2);
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
