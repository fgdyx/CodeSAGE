#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 wcscpy(VAR2, VAR4);
 {
 size_t VAR5;
 for (VAR5=0; VAR5 < wcslen(VAR2); VAR5++)
 {
 if (VAR2[VAR5] == VAR6)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
