#ifndef VAR1
int VAR2 = 0;
wchar_t * FUN1(wchar_t * VAR3);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[VAR5] = VAR6"";
 VAR3 = VAR4;
 VAR2 = 1;
 VAR3 = FUN1(VAR3);
 {
 ifstream VAR7;
 /* POTENTIAL FLAW: Possibly opening a file without validating the file name or path */
 VAR7.open((char *)VAR3);
 VAR7.close();
 }
 ;
}
#endif
