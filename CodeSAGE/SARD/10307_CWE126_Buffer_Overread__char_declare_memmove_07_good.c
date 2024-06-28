#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(VAR5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[50];
 char VAR4[100];
 memset(VAR3, '', 50-1);
 VAR3[50-1] = '';
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 if(VAR5==5)
 {
 VAR2 = VAR4;
 }
 {
 char VAR6[100];
 memset(VAR6, '', 100-1);
 VAR6[100-1] = '';
 memmove(VAR6, VAR2, strlen(VAR6)*sizeof(char));
 VAR6[100-1] = '';
 FUN2(VAR6);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
