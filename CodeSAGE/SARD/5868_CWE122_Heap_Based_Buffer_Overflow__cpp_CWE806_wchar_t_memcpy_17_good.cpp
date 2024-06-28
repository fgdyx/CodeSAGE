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
 memcpy(VAR5, VAR3, wcslen(VAR3)*sizeof(wchar_t));
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
