#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 int VAR3;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR3 = FUN2(VAR2, VAR4|VAR5, VAR6|VAR7);
 if (VAR3 != -1)
 {
 FUN3(VAR3);
 }
 }
}
#endif
