#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100] = VAR4"";
 VAR2 = VAR3;
 /* FLAW: the full path is not specified */
 wcscpy(VAR2, VAR5);
 VAR6* VAR7 = new VAR8;
 VAR7->FUN2(VAR2);
 delete VAR7;
}
#endif
