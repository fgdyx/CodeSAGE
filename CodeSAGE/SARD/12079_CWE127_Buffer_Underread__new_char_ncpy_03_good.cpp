#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(5!=5)
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
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 {
 char * VAR3 = new char[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR4, VAR2, strlen(VAR4));
 VAR4[100-1] = '';
 FUN2(VAR4);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
