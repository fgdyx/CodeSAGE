#ifndef VAR1
void FUN1(VAR2<int> VAR3)
{
 int VAR4 = VAR3[2];
 if (VAR4 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR5 *)VAR4);
 }
}
#endif
