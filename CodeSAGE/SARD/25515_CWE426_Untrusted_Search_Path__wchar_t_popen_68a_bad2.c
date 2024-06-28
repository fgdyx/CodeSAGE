#ifndef VAR1
void FUN1();
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR5);
 VAR6 = VAR2;
 FUN1();
}
#endif
