#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[VAR6] = VAR7"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
#ifdef VAR8
 wcscat(VAR2, VAR7"");
#else
 wcscat(VAR2, VAR7"");
#endif
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 ifstream VAR9;
 VAR9.open((char *)VAR2);
 VAR9.close();
 }
 }
}
void FUN2()
{
 FUN1();
}
#endif
