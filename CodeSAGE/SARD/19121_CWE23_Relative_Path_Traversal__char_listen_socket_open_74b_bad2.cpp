#ifndef VAR1
void FUN1(VAR2<int, char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 int VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5 = FUN2(VAR4, VAR6|VAR7, VAR8|VAR9);
 if (VAR5 != -1)
 {
 FUN3(VAR5);
 }
 }
}
#endif
