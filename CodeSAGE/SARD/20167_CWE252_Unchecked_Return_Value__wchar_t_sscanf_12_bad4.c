#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 /* FLAW: Do not check the return value */
 swscanf(VAR5, VAR3"", VAR4);
 }
 }
 else
 {
 {
 wchar_t VAR2[100] = VAR3"";
 wchar_t * VAR4 = VAR2;
 if (swscanf(VAR5, VAR3"", VAR4) == VAR6)
 {
 FUN3("");
 }
 }
 }
}
#endif
