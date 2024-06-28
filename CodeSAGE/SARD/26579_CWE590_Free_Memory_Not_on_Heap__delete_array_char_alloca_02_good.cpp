#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN2(VAR2);
 delete [] VAR2;
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 FUN2(VAR2);
 delete [] VAR2;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
