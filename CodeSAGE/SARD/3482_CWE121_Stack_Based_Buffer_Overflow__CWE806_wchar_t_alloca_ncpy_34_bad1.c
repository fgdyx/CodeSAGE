#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE806_wchar_t_alloca_ncpy_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2(100*sizeof(wchar_t));
 VAR2 = VAR4;
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR5'', 100-1);
 VAR2[100-1] = VAR5'';
 VAR3.VAR6 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR7;
 {
 wchar_t VAR8[50] = VAR5"";
 /* POTENTIAL FLAW: Possible buffer overflow if data is larger than dest */
 wcsncpy(VAR8, VAR2, wcslen(VAR2));
 VAR8[50-1] = VAR5'';
 FUN3(VAR2);
 }
 }
}
#endif
