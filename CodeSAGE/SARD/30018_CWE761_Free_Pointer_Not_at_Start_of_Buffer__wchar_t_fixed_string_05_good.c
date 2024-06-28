#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 wcscpy(VAR2, VAR4);
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < wcslen(VAR2); VAR6++)
 {
 if (VAR2[VAR6] == VAR7)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
static void FUN3()
{
 wchar_t * VAR2;
 VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
 VAR2[0] = VAR3'';
 wcscpy(VAR2, VAR4);
 if(VAR8)
 {
 {
 size_t VAR6;
 for (VAR6=0; VAR6 < wcslen(VAR2); VAR6++)
 {
 if (VAR2[VAR6] == VAR7)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
