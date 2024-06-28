#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 memmove(VAR4, VAR3, wcslen(VAR4)*sizeof(wchar_t));
 VAR4[100-1] = VAR5'';
 FUN2(VAR4);
 free(VAR3);
 }
}
#endif
