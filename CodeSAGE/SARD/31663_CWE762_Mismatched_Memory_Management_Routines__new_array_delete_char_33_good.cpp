#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 {
 char * VAR2 = VAR3;
 delete VAR2;
 }
}
static void FUN2()
{
 char * VAR2;
 char * &VAR3 = VAR2;
 VAR2 = NULL;
 VAR2 = new char[100];
 {
 char * VAR2 = VAR3;
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
