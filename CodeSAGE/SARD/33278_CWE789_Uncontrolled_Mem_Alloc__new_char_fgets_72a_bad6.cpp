#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4);
void FUN2()
{
 size_t VAR5;
 VAR2<VAR3> VAR4;
 VAR5 = 0;
 {
 char VAR6[VAR7] = "";
 /* POTENTIAL FLAW: Read data from the console using fgets() */
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR5 = FUN3(VAR6, NULL, 0);
 }
 else
 {
 FUN4("");
 }
 }
 VAR4.FUN5(VAR4.FUN6(), 1, VAR5);
 VAR4.FUN5(VAR4.FUN6(), 1, VAR5);
 VAR4.FUN5(VAR4.FUN6(), 1, VAR5);
 FUN1(VAR4);
}
#endif
