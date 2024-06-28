#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
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
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR2, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 {
 char * VAR4 = new char[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 VAR2 = VAR4;
 }
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memmove(VAR5, VAR2, 100*sizeof(char));
 VAR5[100-1] = '';
 FUN2(VAR5);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
