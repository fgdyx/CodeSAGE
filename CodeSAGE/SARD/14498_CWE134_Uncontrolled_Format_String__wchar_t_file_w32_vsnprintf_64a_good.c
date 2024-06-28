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
 VAR7 * VAR8;
 if (100-VAR6 > 1)
 {
 VAR8 = fopen(VAR9, "");
 if (VAR8 != NULL)
 {
 if (FUN5(VAR3+VAR6, (int)(100-VAR6), VAR8) == NULL)
 {
 FUN6("");
 VAR3[VAR6] = VAR5'';
 }
 fclose(VAR8);
 }
 }
 }
 FUN3(&VAR3);
}
void FUN7()
{
 FUN2();
 FUN4();
}
#endif
