#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 ifstream VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5.open((char *)VAR4);
 VAR5.close();
 }
}
#endif
