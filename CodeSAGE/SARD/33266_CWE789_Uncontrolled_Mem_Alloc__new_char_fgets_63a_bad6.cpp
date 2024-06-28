#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 size_t VAR4;
 VAR4 = 0;
 {
 char VAR5[VAR6] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR5, VAR6, stdin) != NULL)
 {
 VAR4 = FUN3(VAR5, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 FUN1(&VAR4);
}
#endif
