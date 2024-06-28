#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 wchar_t VAR3[50] = VAR4"";
 wcsncat(VAR3, VAR2, wcslen(VAR2));
 VAR3[50-1] = VAR4'';
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
