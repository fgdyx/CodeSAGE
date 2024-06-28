#ifndef VAR1
void FUN1(HANDLE VAR2)
{
 if (VAR2 != VAR3)
 {
 /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
 FUN2((int)VAR2);
 }
}
#endif
