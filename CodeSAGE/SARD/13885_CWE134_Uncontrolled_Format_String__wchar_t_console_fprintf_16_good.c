#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 while(1)
 {
 {
 size_t VAR5 = wcslen(VAR2);
 if (100-VAR5 > 1)
 {
 if (FUN2(VAR2+VAR5, (int)(100-VAR5), stdin) != NULL)
 {
 VAR5 = wcslen(VAR2);
 if (VAR5 > 0 && VAR2[VAR5-1] == VAR4'')
 {
 VAR2[VAR5-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR5] = VAR4'';
 }
 }
 }
 break;
 }
 while(1)
 {
 fwprintf(VAR6, VAR4"", VAR2);
 break;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 while(1)
 {
 wcscpy(VAR2, VAR4"");
 break;
 }
 while(1)
 {
 fwprintf(VAR6, VAR2);
 break;
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
