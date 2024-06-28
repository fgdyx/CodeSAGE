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
 ofstream VAR6;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6.open((char *)VAR3);
 VAR6.close();
 }
 ;
}
#endif
