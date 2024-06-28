#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 {
 ofstream VAR5;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR5.open((char *)VAR4);
 VAR5.close();
 }
}
#endif
