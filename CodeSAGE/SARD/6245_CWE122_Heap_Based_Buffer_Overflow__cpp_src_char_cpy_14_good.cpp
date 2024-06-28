#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = new char[100];
 if(VAR3==5)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
