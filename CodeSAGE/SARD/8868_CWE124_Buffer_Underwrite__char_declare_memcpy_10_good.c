#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100];
 memset(VAR3, '', 100-1);
 VAR3[100-1] = '';
 if(VAR6)
 {
 VAR2 = VAR3;
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 memcpy(VAR2, VAR5, 100*sizeof(char));
 VAR2[100-1] = '';
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
