#ifndef VAR1
void FUN1(wchar_t * VAR2[])
{
 wchar_t * VAR3 = VAR2[2];
 {
 ifstream VAR4;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR4.open((char *)VAR3);
 VAR4.close();
 }
}
#endif
