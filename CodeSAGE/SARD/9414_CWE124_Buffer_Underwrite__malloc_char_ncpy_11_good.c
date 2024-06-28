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
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN5())
 {
 {
 char * VAR3 = (char *)malloc(100*sizeof(char));
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 VAR2 = VAR3;
 }
 }
 {
 char VAR4[100];
 memset(VAR4, '', 100-1);
 VAR4[100-1] = '';
 strncpy(VAR2, VAR4, 100-1);
 VAR2[100-1] = '';
 FUN3(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
