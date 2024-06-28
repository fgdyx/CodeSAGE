#ifndef VAR1
void FUN1(VAR2<VAR3> VAR4)
{
 HANDLE VAR5 = VAR4[2];
 if (VAR5 != VAR6)
 {
 /* FLAW: Attempt to close the file using fclose() instead of CloseHandle() */
 fclose((VAR7 *)VAR5);
 }
}
#endif
