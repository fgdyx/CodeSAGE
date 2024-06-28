#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_declare_snprintf_34_unionType VAR3;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 /* FLAW: Set a pointer to a "small" buffer. This buffer will be used in the sinks as a destination
 * buffer in various memory copying functions using a "large" source buffer. */
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 wchar_t VAR9[100];
 wmemset(VAR9, VAR6'', 100-1);
 VAR9[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 FUN2(VAR2, 100, VAR6"", VAR9);
 FUN3(VAR2);
 }
 }
}
#endif
