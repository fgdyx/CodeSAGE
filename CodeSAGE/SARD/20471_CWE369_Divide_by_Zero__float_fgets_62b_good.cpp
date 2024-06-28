#ifndef VAR1
void FUN1(float &VAR2)
{
 VAR2 = 2.0F;
}
void FUN2(float &VAR2)
{
 {
 char VAR3[VAR4];
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = (float)FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
