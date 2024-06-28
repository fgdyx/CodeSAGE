#ifndef VAR1
void FUN1(wchar_t * VAR2[])
{
 wchar_t * VAR3 = VAR2[2];
 {
 size_t VAR4, VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 VAR5 = wcslen(VAR6);
 for (VAR4 = 0; VAR4 < VAR5; VAR4++)
 {
 VAR6[VAR4] = VAR3[VAR4];
 }
 VAR6[100-1] = VAR7'';
 FUN2(VAR6);
 delete [] VAR3;
 }
}
#endif
