#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[100];
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR3, VAR2, wcslen(VAR3)*sizeof(wchar_t));
 VAR3[100-1] = VAR4'';
 FUN2(VAR3);
 free(VAR2);
 }
}
#endif
