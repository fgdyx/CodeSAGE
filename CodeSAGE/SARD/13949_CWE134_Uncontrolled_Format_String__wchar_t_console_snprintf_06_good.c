#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 if (FUN2(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 }
 if(VAR5!=5)
 {
 FUN3("");
 }
 else
 {
 {
 wchar_t VAR7[100] = VAR4"";
 FUN4(VAR7, 100-1, VAR4"", VAR2);
 FUN5(VAR7);
 }
 }
}
static void FUN6()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 {
 size_t VAR6 = wcslen(VAR2);
 if (100-VAR6 > 1)
 {
 if (FUN2(VAR2+VAR6, (int)(100-VAR6), stdin) != NULL)
 {
 VAR6 = wcslen(VAR2);
 if (VAR6 > 0 && VAR2[VAR6-1] == VAR4'')
 {
 VAR2[VAR6-1] = VAR4'';
 }
 }
 else
 {
 FUN3("");
 VAR2[VAR6] = VAR4'';
 }
 }
 }
 }
 if(VAR5==5)
 {
 {
 wchar_t VAR7[100] = VAR4"";
 FUN4(VAR7, 100-1, VAR4"", VAR2);
 FUN5(VAR7);
 }
 }
}
static void FUN7()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5!=5)
 {
 FUN3("");
 }
 else
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR5==5)
 {
 {
 wchar_t VAR7[100] = VAR4"";
 FUN4(VAR7, 100-1, VAR2);
 FUN5(VAR7);
 }
 }
}
static void FUN8()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 if(VAR5==5)
 {
 wcscpy(VAR2, VAR4"");
 }
 if(VAR5==5)
 {
 {
 wchar_t VAR7[100] = VAR4"";
 FUN4(VAR7, 100-1, VAR2);
 FUN5(VAR7);
 }
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
