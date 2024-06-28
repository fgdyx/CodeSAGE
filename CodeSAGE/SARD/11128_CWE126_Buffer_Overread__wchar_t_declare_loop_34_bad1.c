#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 CWE126_Buffer_Overread__wchar_t_declare_loop_34_unionType VAR3;
 wchar_t VAR4[50];
 wchar_t VAR5[100];
 wmemset(VAR4, VAR6'', 50-1);
 VAR4[50-1] = VAR6'';
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* FLAW: Set data pointer to a small buffer */
 VAR2 = VAR4;
 VAR3.VAR7 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR8;
 {
 size_t VAR9, VAR10;
 wchar_t VAR11[100];
 wmemset(VAR11, VAR6'', 100-1);
 VAR11[100-1] = VAR6'';
 VAR10 = wcslen(VAR11);
 /* POTENTIAL FLAW: using length of the dest where data
 * could be smaller than dest causing buffer overread */
 for (VAR9 = 0; VAR9 < VAR10; VAR9++)
 {
 VAR11[VAR9] = VAR2[VAR9];
 }
 VAR11[100-1] = VAR6'';
 FUN2(VAR11);
 }
 }
}
#endif
