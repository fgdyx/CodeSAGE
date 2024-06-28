#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR5);
 const VAR6& VAR7 = FUN2();
 VAR7.FUN3(VAR2);
}
#endif
