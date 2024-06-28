#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR2);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR2[VAR6];
 }
 VAR5[50-1] = VAR4'';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 wmemset(VAR2, VAR4'', 50-1);
 VAR2[50-1] = VAR4'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR5[50] = VAR4"";
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR2);
 for (VAR6 = 0; VAR6 < VAR7; VAR6++)
 {
 VAR5[VAR6] = VAR2[VAR6];
 }
 VAR5[50-1] = VAR4'';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
