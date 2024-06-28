#ifndef VAR1
void FUN1(CWE121_Stack_Based_Buffer_Overflow__CWE805_wchar_t_alloca_memcpy_67_structType VAR2)
{
 wchar_t * VAR3 = VAR2.VAR4;
 {
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: Possible buffer overflow if the size of data is less than the length of source */
 memcpy(VAR3, VAR5, 100*sizeof(wchar_t));
 VAR3[100-1] = VAR6'';
 FUN2(VAR3);
 }
}
#endif
