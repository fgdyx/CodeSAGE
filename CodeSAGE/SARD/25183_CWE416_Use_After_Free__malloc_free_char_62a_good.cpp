#ifndef VAR1
void FUN1(char * &VAR2);
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 FUN3(VAR2);
}
void FUN4(char * &VAR2);
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 FUN4(VAR2);
 ;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
