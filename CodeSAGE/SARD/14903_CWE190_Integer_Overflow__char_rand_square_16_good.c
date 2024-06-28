#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 while(1)
 {
 VAR2 = (char)FUN2();
 break;
 }
 while(1)
 {
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR3))
 {
 char VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 else
 {
 FUN6("");
 }
 break;
 }
}
static void FUN7()
{
 char VAR2;
 VAR2 = '';
 while(1)
 {
 VAR2 = 2;
 break;
 }
 while(1)
 {
 {
 char VAR4 = VAR2 * VAR2;
 FUN5(VAR4);
 }
 break;
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
