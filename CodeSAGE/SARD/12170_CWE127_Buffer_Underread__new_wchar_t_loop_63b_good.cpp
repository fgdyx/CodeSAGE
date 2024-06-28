#ifndef VAR1
void FUN1(wchar_t * * VAR2)
{
 wchar_t * VAR3 = *VAR2;
 {
 size_t VAR4;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR5[VAR4] = VAR3[VAR4];
 }
 VAR5[100-1] = VAR6'';
 FUN2(VAR5);
 }
}
#endif
