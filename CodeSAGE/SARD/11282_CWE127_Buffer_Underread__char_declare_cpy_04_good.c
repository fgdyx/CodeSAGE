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
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR2);
 FUN2(VAR5);
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
 char VAR5[100*2];
 memset(VAR5, '', 100*2-1);
 VAR5[100*2-1] = '';
 strcpy(VAR5, VAR2);
 FUN2(VAR5);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
