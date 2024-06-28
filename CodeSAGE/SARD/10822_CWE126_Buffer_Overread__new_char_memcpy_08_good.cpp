#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 delete [] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN5())
 {
 VAR2 = new char[100];
 memset(VAR2, '', 100-1);
 VAR2[100-1] = '';
 }
 {
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 memcpy(VAR3, VAR2, strlen(VAR3)*sizeof(char));
 VAR3[100-1] = '';
 FUN3(VAR3);
 delete [] VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
