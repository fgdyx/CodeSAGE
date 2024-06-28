#ifndef VAR1
static wchar_t * FUN1(wchar_t * VAR2)
{
 wcscat(VAR2, VAR3"");
 return VAR2;
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[VAR5] = VAR6;
 VAR2 = VAR4;
 VAR2 = FUN1(VAR2);
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN3(VAR2, VAR3"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN4()
{
 FUN2();
}
#endif
