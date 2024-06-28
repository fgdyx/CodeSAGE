#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[50] = VAR5"";
 memmove(VAR4, VAR3, wcslen(VAR3)*sizeof(wchar_t));
 VAR4[50-1] = VAR5'';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
