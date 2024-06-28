#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new wchar_t[10+1];
 VAR3.VAR4 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR5;
 {
 wchar_t VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN2(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
