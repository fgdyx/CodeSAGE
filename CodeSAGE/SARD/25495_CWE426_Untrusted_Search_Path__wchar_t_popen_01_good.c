#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 wcscpy(VAR2, VAR5);
 {
 VAR6 *VAR7;
 VAR7 = FUN2(VAR2, VAR4"");
 if (VAR7 != NULL)
 {
 FUN3(VAR7);
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
