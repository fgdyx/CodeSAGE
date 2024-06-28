#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 strcpy(VAR2, VAR6);
 FUN2(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR3[10];
 char VAR4[10+1];
 if(VAR8)
 {
 VAR2 = VAR4;
 VAR2[0] = '';
 }
 {
 char VAR6[10+1] = VAR7;
 strcpy(VAR2, VAR6);
 FUN2(VAR2);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
