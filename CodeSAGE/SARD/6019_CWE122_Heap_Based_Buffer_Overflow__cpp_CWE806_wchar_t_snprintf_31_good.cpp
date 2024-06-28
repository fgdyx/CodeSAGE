#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 wmemset(VAR2, VAR3'', 50-1);
 VAR2[50-1] = VAR3'';
 {
 wchar_t * VAR4 = VAR2;
 wchar_t * VAR2 = VAR4;
 {
 wchar_t VAR5[50] = VAR3"";
 FUN2(VAR5, wcslen(VAR2), VAR3"", VAR2);
 FUN3(VAR2);
 delete [] VAR2;
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
