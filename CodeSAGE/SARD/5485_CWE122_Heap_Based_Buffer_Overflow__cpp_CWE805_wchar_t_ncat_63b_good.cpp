#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 wcsncat(VAR3, VAR4, 100);
 FUN2(VAR3);
 delete [] VAR3;
 }
}
#endif
