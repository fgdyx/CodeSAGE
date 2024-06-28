#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 delete VAR2;
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
