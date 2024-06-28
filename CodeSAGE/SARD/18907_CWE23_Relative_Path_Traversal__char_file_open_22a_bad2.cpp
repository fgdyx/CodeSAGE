#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = VAR6;
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR7;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7 = FUN3(VAR3, VAR8|VAR9, VAR10|VAR11);
 if (VAR7 != -1)
 {
 FUN4(VAR7);
 }
 }
 ;
}
#endif
