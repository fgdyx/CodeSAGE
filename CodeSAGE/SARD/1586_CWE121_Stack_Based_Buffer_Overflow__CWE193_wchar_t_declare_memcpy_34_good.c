#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_memcpy_34_unionType VAR3;
 wchar_t VAR4[10];
 wchar_t VAR5[10+1];
 VAR2 = VAR5;
 VAR2[0] = VAR6'';
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 wchar_t VAR9[10+1] = VAR10;
 memcpy(VAR2, VAR9, (wcslen(VAR9) + 1) * sizeof(wchar_t));
 FUN2(VAR2);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
