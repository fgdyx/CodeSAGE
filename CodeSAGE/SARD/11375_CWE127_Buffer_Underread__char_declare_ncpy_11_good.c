#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(FUN5())
 {
 VAR2 = VAR3;
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN3(VAR4);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
