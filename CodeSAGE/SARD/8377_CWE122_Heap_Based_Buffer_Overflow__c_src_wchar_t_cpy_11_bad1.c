#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 if(FUN2())
 {
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 }
 {
 wchar_t VAR4[50] = VAR3"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 wcscpy(VAR4, VAR2);
 FUN3(VAR2);
 free(VAR2);
 }
}
#endif
