#ifndef VAR1
void FUN1(VAR2 &VAR3)
{
 VAR3 = 20;
}
void FUN2(VAR2 &VAR3)
{
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN3(VAR4, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
