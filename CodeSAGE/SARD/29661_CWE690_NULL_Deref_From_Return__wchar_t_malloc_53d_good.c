#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 if (VAR2 != NULL)
 {
 wcscpy(VAR2, VAR3"");
 FUN2(VAR2);
 free(VAR2);
 }
}
#endif
