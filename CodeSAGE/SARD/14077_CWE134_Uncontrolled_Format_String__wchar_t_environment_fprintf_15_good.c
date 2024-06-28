#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(8)
 {
 case 7:
 FUN3("");
 break;
 default:
 fwprintf(VAR8, VAR4"", VAR2);
 break;
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 {
 size_t VAR5 = wcslen(VAR2);
 wchar_t * VAR6 = FUN2(VAR7);
 if (VAR6 != NULL)
 {
 wcsncat(VAR2+VAR5, VAR6, 100-VAR5-1);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 fwprintf(VAR8, VAR4"", VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN5()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN3("");
 break;
 default:
 wcscpy(VAR2, VAR4"");
 break;
 }
 switch(7)
 {
 case 7:
 fwprintf(VAR8, VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wcscpy(VAR2, VAR4"");
 break;
 default:
 FUN3("");
 break;
 }
 switch(7)
 {
 case 7:
 fwprintf(VAR8, VAR2);
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
