#ifndef VAR1
static void FUN1(char * &VAR2)
{
 VAR2 = new char;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 delete VAR2;
}
static void FUN3(char * &VAR2)
{
 VAR2 = new char;
 delete VAR2;
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 FUN3(VAR2);
 ;
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
