#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 wcsncat(VAR2, VAR4, 100);
 FUN2(VAR2);
 delete [] VAR2;
 }
}
#endif
