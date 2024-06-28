#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 for (VAR3=0; VAR3 < wcslen(VAR2); VAR3++)
 {
 if (VAR2[VAR3] == VAR4)
 {
 FUN2("");
 break;
 }
 }
 free(VAR2);
 }
}
#endif
