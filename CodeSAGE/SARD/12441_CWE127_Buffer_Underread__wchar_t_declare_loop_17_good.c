#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = VAR4;
 }
 {
 size_t VAR6;
 wchar_t VAR7[100];
 wmemset(VAR7, VAR5'', 100-1);
 VAR7[100-1] = VAR5'';
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR7[VAR6] = VAR3[VAR6];
 }
 VAR7[100-1] = VAR5'';
 FUN2(VAR7);
 }
}
void FUN3()
{
 FUN1();
}
#endif
