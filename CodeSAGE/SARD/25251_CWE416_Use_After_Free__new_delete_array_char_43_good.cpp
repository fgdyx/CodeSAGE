#ifndef VAR1
static void FUN1(char * &VAR2)
{
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 FUN3(VAR2);
}
static void FUN4(char * &VAR2)
{
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 delete [] VAR2;
}
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
