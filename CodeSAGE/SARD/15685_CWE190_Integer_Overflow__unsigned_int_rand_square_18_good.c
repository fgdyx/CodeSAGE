#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 VAR2 = (unsigned int)FUN2();
 goto VAR4;
VAR4:
 if (FUN3((long)VAR2) <= (long)FUN4((double)VAR5))
 {
 unsigned int VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 unsigned int VAR2;
 VAR2 = 0;
 goto VAR3;
VAR3:
 VAR2 = 2;
 goto VAR4;
VAR4:
 {
 unsigned int VAR6 = VAR2 * VAR2;
 FUN5(VAR6);
 }
}
void FUN8()
{
 FUN1();
 FUN7();
}
#endif
