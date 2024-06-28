#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (wchar_t *)malloc((10+1)*sizeof(wchar_t));
 }
 {
 wchar_t VAR4[10+1] = VAR5;
 size_t VAR6, VAR7;
 VAR7 = wcslen(VAR4);
 for (VAR6 = 0; VAR6 < VAR7 + 1; VAR6++)
 {
 VAR3[VAR6] = VAR4[VAR6];
 }
 FUN2(VAR3);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
