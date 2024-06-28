#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[VAR4] = VAR5;
 VAR2 = VAR3;
 wcscat(VAR2, VAR6"");
 {
 VAR7 *VAR8 = NULL;
 VAR8 = FUN2(VAR2, VAR6"");
 if (VAR8 != NULL)
 {
 fclose(VAR8);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
