#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: using memcpy with the length of the dest where data
 * could be smaller than dest causing buffer overread */
 memcpy(VAR4, VAR2, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 free(VAR2);
 }
}
#endif
