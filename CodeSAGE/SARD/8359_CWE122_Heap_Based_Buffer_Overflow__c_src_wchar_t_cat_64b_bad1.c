#ifndef VAR1
void FUN1(void * VAR2)
{
 wchar_t * * VAR3 = (wchar_t * *)VAR2;
 wchar_t * VAR4 = (*VAR3);
 {
 wchar_t VAR5[50] = VAR6"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than sizeof(dest)-wcslen(dest)*/
 wcscat(VAR5, VAR4);
 FUN2(VAR4);
 free(VAR4);
 }
}
#endif
