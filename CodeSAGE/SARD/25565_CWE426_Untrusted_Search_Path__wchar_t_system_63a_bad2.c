#ifndef VAR1
void FUN1(wchar_t * * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 /* FLAW: the full path is not specified */
 wcscpy(VAR3, VAR6);
 FUN1(&VAR3);
}
#endif
