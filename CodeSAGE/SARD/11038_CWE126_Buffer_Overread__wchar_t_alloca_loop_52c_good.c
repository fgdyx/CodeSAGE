#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3, VAR4;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 VAR4 = wcslen(VAR5);
 for (VAR3 = 0; VAR3 < VAR4; VAR3++)
 {
 VAR5[VAR3] = VAR2[VAR3];
 }
 VAR5[100-1] = VAR6'';
 FUN2(VAR5);
 }
}
#endif
