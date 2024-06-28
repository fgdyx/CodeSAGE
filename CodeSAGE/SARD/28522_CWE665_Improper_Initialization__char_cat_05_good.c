#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2[0] = '';
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR2, VAR5);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(VAR6)
 {
 VAR2[0] = '';
 }
 {
 char VAR5[100];
 memset(VAR5, '', 100-1);
 VAR5[100-1] = '';
 strcat(VAR2, VAR5);
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
