#ifndef VAR1
void FUN1(char * &VAR2);
void FUN2()
{
 char * VAR2;
 char VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 ofstream VAR6;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
#endif
