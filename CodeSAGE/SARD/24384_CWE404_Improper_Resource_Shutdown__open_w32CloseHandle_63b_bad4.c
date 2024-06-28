#ifndef VAR1
void FUN1(int * VAR2)
{
 int VAR3 = *VAR2;
 if (VAR3 != -1)
 {
 /* FLAW: Attempt to close the file using CloseHandle() instead of close() */
 FUN2((VAR4)VAR3);
 }
}
#endif
