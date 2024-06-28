#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR4;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR5[VAR4];
 }
 VAR2[100-1] = VAR6'';
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
