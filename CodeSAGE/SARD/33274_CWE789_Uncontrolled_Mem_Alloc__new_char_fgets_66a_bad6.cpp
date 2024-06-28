#ifndef VAR1
void FUN1(size_t VAR2[]);
void FUN2()
{
 size_t VAR3;
 size_t VAR2[5];
 VAR3 = 0;
 {
 char VAR4[VAR5] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR3 = FUN3(VAR4, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
