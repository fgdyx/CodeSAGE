#ifndef VAR1
wchar_t * FUN1(wchar_t * VAR2)
{
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR3);
 return VAR2;
}
#endif
