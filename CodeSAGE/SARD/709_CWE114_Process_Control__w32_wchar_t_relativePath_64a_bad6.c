#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 wchar_t * VAR3;
 wchar_t VAR4[100] = VAR5"";
 VAR3 = VAR4;
 /* FLAW: Specify just the file name for the library, not the full path */
 wcscpy(VAR3, VAR5"");
 FUN1(&VAR3);
}
#endif
