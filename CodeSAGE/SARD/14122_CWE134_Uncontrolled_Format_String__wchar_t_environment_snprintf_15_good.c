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
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR4"", VAR2);
 FUN5(VAR8);
 }
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
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR4"", VAR2);
 FUN5(VAR8);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN7()
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
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
static void FUN8()
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
 {
 wchar_t VAR8[100] = VAR4"";
 FUN4(VAR8, 100-1, VAR2);
 FUN5(VAR8);
 }
 break;
 default:
 FUN3("");
 break;
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
