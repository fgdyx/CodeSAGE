#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN3(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 char VAR3[100];
 VAR2 = VAR3;
 if(FUN5())
 {
 memset(VAR2, '', 50-1);
 VAR2[50-1] = '';
 }
 {
 char VAR4[50] = "";
 strcpy(VAR4, VAR2);
 FUN3(VAR2);
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
