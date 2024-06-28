#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 VAR2 = 2;
 {
 char VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 char VAR2;
 VAR2 = '';
 VAR2 = (char)FUN4();
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR4))
 {
 char VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
void FUN8()
{
 FUN1();
 FUN3();
}
#endif
