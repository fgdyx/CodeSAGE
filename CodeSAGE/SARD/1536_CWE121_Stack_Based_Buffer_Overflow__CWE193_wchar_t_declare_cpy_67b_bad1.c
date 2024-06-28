#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_cpy_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[10+1] = VAR6;
 /* POTENTIAL FLAW: data may not have enough space to hold source */
 wcscpy(VAR3, VAR5);
 FUN2(VAR3);
 }
}
#endif
