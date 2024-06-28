#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR5);
 {
 wchar_t * VAR6 = VAR2;
 wchar_t * VAR2 = VAR6;
 {
 VAR7 *VAR8;
 VAR8 = FUN2(VAR2, VAR4"");
 if (VAR8 != NULL)
 {
 FUN3(VAR8);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
