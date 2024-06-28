#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2()
{
 size_t VAR2;
 VAR2 = 0;
 {
 char VAR3[VAR4] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN3(VAR3, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 FUN1(VAR2);
}
#endif
