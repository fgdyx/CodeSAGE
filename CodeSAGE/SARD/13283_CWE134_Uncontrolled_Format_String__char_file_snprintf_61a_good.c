#ifndef VAR1
char * FUN1(char * VAR2);
static void FUN2()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 char VAR4[100] = "";
 FUN3(VAR4, 100-1, VAR2);
 FUN4(VAR4);
 }
}
char * FUN5(char * VAR2);
static void FUN6()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 VAR2 = FUN5(VAR2);
 {
 char VAR4[100] = "";
 FUN3(VAR4, 100-1, "", VAR2);
 FUN4(VAR4);
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
