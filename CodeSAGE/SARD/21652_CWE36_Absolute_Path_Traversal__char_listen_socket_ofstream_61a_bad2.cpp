#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = "";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 ofstream VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5.open((char *)VAR2);
 VAR5.close();
 }
}
#endif
