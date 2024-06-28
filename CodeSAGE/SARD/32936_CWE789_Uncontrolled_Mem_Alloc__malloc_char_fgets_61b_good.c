#ifndef VAR1
VAR2 FUN1(size_t VAR3)
{
 VAR3 = 20;
 return VAR3;
}
VAR2 FUN2(size_t VAR3)
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
 return VAR3;
}
#endif
