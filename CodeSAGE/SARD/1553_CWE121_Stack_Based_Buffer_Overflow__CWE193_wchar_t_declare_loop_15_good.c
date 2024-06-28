#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 switch(5)
 {
 case 6:
 FUN2("");
 break;
 default:
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 break;
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[10];
 wchar_t VAR4[10+1];
 switch(6)
 {
 case 6:
 VAR2 = VAR4;
 VAR2[0] = VAR5'';
 break;
 default:
 FUN2("");
 break;
 }
 {
 wchar_t VAR6[10+1] = VAR7;
 size_t VAR8, VAR9;
 VAR9 = wcslen(VAR6);
 for (VAR8 = 0; VAR8 < VAR9 + 1; VAR8++)
 {
 VAR2[VAR8] = VAR6[VAR8];
 }
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
