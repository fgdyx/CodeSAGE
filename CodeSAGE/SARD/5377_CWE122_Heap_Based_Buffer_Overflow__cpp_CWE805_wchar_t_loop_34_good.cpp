#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 unionType VAR3;
 VAR2 = NULL;
 VAR2 = new wchar_t[100];
 VAR2[0] = VAR4'';
 VAR3.VAR5 = VAR2;
 {
 wchar_t * VAR2 = VAR3.VAR6;
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR4'', 100-1);
 VAR8[100-1] = VAR4'';
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR4'';
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
