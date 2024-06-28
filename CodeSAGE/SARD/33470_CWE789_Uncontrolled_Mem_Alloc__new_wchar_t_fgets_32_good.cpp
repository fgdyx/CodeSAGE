#ifndef VAR1
static void FUN1()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 VAR2 = 20;
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7))
 {
 VAR6 = new wchar_t[VAR2];
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
static void FUN4()
{
 size_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0;
 {
 size_t VAR2 = *VAR4;
 {
 char VAR8[VAR9] = "";
 if (fgets(VAR8, VAR9, stdin) != NULL)
 {
 VAR2 = FUN5(VAR8, NULL, 0);
 }
 else
 {
 FUN3("");
 }
 }
 *VAR4 = VAR2;
 }
 {
 size_t VAR2 = *VAR5;
 {
 wchar_t * VAR6;
 if (VAR2 > wcslen(VAR7) && VAR2 < 100)
 {
 VAR6 = new wchar_t[VAR2];
 wcscpy(VAR6, VAR7);
 FUN2(VAR6);
 delete [] VAR6;
 }
 else
 {
 FUN3("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN4();
}
#endif
