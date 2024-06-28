#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR5;
 VAR2 = 0;
 {
 char VAR6[VAR7] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN3(VAR6, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 FUN5(VAR2);
}
#endif
