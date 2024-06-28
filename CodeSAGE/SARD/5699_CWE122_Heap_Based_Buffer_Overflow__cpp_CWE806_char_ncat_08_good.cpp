#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 strncat(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = new char[100];
 if(FUN5())
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 strncat(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN3(VAR2);
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
