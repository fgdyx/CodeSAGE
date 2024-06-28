#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 ifstream VAR3;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR3.open((char *)VAR2);
 VAR3.close();
 }
}
#endif
