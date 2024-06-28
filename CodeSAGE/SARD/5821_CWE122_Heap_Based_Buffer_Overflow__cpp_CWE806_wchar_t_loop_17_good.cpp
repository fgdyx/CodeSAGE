#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = new wchar_t[100];
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 wmemset(VAR3, VAR4'', 50-1);
 VAR3[50-1] = VAR4'';
 }
 {
 wchar_t VAR5[50] = VAR4"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR3);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR3[VAR6];
 }
 VAR5[50-1] = VAR4'';
 FUN2(VAR3);
 delete [] VAR3;
 }
}
void FUN3()
{
 FUN1();
}
#endif
