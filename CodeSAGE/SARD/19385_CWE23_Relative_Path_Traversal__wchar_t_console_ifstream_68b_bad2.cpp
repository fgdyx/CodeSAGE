#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 ifstream VAR4;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4.open((char *)VAR2);
 VAR4.close();
 }
}
#endif
