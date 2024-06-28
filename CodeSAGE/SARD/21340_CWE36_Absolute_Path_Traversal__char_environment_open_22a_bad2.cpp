#ifndef VAR1
int VAR2 = 0;
char * FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 char VAR4[VAR5] = "";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 int VAR6;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6 = FUN3(VAR3, VAR7|VAR8, VAR9|VAR10);
 if (VAR6 != -1)
 {
 FUN4(VAR6);
 }
 }
 ;
}
#endif
