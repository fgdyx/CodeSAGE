#ifndef VAR1
void FUN1(structType VAR2)
{
 char * VAR3 = VAR2.VAR4;
 {
 ifstream VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5.open((char *)VAR3);
 VAR5.close();
 }
}
#endif
