#ifndef VAR1
int FUN1(int VAR2);
void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 if (VAR2 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR3 *)VAR2);
 }
}
#endif
