#ifndef VAR1
void FUN1(int &VAR2)
{
 VAR2 = 2;
}
void FUN2(int &VAR2)
{
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
