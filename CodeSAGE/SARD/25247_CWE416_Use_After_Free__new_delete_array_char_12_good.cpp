#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 delete [] VAR2;
 }
 else
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 delete [] VAR2;
 }
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 else
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 if(FUN2())
 {
 FUN4(VAR2);
 }
 else
 {
 FUN4(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
