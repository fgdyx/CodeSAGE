#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_alloca_loop_34_unionType VAR3;
 wchar_t * VAR4 = (wchar_t *)FUN2((10)*sizeof(wchar_t));
 wchar_t * VAR5 = (wchar_t *)FUN2((10+1)*sizeof(wchar_t));
 /* FLAW: Set a pointer to a buffer that does not leave room for a NULL terminator when performing
 * string copies in the sinks */
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 wchar_t VAR9[10+1] = VAR10;
 size_t VAR11, VAR12;
 VAR12 = wcslen(VAR9);
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 for (VAR11 = 0; VAR11 < VAR12 + 1; VAR11++)
 {
 VAR2[VAR11] = VAR9[VAR11];
 }
 FUN3(VAR2);
 }
 }
}
#endif
