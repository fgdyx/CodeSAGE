#ifndef VAR1
void FUN1(float VAR2);
static void FUN2()
{
 float VAR2;
 VAR2 = 0.0F;
 VAR2 = 2.0F;
 FUN1(VAR2);
}
void FUN3(float VAR2);
static void FUN4()
{
 float VAR2;
 VAR2 = 0.0F;
 {
 char VAR3[VAR4];
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN5(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
 FUN3(VAR2);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
