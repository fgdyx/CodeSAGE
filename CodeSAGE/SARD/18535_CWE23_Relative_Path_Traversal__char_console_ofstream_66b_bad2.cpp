#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 {
 ofstream VAR4;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4.open((char *)VAR3);
 VAR4.close();
 }
}
#endif
