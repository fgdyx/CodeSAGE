#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 delete VAR2;
 }
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = new char;
 delete VAR2;
 {
 char * VAR3 = VAR2;
 char * VAR2 = VAR3;
 ;
 }
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
