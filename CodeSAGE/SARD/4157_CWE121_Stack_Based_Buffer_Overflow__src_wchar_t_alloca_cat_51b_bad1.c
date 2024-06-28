#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcscat(VAR3, VAR2);
 FUN2(VAR2);
 }
}
#endif
