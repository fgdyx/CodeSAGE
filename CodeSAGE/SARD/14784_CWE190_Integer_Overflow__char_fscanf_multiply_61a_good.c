#ifndef VAR1
char FUN1(char VAR2);
static void FUN2()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 char VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
char FUN4(char VAR2);
static void FUN5()
{
 char VAR2;
 VAR2 = '';
 VAR2 = FUN4(VAR2);
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR4/2))
 {
 char VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
