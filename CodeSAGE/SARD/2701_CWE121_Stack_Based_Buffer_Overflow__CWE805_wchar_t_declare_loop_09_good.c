#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR6'', 100-1);
 VAR8[100-1] = VAR6'';
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR6'';
 FUN3(VAR2);
 }
}
static void FUN4()
{
 wchar_t * VAR2;
 wchar_t VAR3[50];
 wchar_t VAR4[100];
 if(VAR9)
 {
 VAR2 = VAR4;
 VAR2[0] = VAR6'';
 }
 {
 size_t VAR7;
 wchar_t VAR8[100];
 wmemset(VAR8, VAR6'', 100-1);
 VAR8[100-1] = VAR6'';
 for (VAR7 = 0; VAR7 < 100; VAR7++)
 {
 VAR2[VAR7] = VAR8[VAR7];
 }
 VAR2[100-1] = VAR6'';
 FUN3(VAR2);
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
