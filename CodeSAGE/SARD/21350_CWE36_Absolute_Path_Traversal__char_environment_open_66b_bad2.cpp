#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 int VAR4;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4 = FUN2(VAR3, VAR5|VAR6, VAR7|VAR8);
 if (VAR4 != -1)
 {
 FUN3(VAR4);
 }
 }
}
#endif
