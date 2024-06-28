#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 wcscpy(VAR3, VAR5"");
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 {
 size_t VAR6 = wcslen(VAR3);
 wchar_t * VAR7 = FUN5(VAR8);
 if (VAR7 != NULL)
 {
 wcsncat(VAR3+VAR6, VAR7, 100-VAR6-1);
 }
 }
 FUN3(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
