#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 HANDLE VAR4 = *VAR3;
 if (VAR4 != VAR5)
 {
 /* FLAW: Attempt to close the file using close() instead of CloseHandle() */
 FUN2((int)VAR4);
 }
}
#endif
