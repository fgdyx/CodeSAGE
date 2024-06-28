#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5"";
 VAR2 = VAR3;
 VAR2 = FUN1(VAR2);
 {
 ofstream VAR6;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR6.open((char *)VAR2);
 VAR6.close();
 }
}
#endif
