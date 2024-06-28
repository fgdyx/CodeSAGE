#ifndef VAR1
static void FUN1(wchar_t * VAR2)
{
 {
 VAR3 *VAR4 = NULL;
 VAR4 = FUN2(VAR2, VAR5"");
 if (VAR4 != NULL)
 {
 fclose(VAR4);
 }
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 void (*VAR6) (wchar_t *) = VAR7;
 wchar_t VAR8[VAR9] = VAR10;
 VAR2 = VAR8;
 wcscat(VAR2, VAR5"");
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
