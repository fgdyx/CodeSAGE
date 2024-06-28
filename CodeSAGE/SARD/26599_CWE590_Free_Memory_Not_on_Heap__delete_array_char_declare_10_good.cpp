#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 FUN2("");
 }
 else
 {
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 }
 FUN2(VAR2);
 delete [] VAR2;
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
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
