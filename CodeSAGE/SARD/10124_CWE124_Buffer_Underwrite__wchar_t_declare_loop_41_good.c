#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 for (VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = VAR4[VAR3];
 }
 VAR2[100-1] = VAR5'';
 FUN2(VAR2);
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR5'', 100-1);
 VAR6[100-1] = VAR5'';
 VAR2 = VAR6;
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
