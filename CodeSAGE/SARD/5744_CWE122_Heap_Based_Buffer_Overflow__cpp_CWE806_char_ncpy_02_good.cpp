#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = new char[100];
 if(0)
 {
 FUN2("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = new char[100];
 if(1)
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR3[50] = "";
 strncpy(VAR3, VAR2, strlen(VAR2));
 VAR3[50-1] = '';
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
