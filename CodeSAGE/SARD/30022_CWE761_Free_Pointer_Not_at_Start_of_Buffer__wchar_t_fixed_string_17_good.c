#ifndef VAR1
static void FUN1()
{
 int VAR2;
 wchar_t * VAR3;
 VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR3[0] = VAR4'';
 wcscpy(VAR3, VAR5);
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < wcslen(VAR3); VAR6++)
 {
 if (VAR3[VAR6] == VAR7)
 {
 FUN2("");
 break;
 }
 }
 free(VAR3);
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
