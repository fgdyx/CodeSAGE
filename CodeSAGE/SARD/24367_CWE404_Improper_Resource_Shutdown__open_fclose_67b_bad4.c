#ifndef VAR1
void FUN1(CWE404_Improper_Resource_Shutdown__open_fclose_67_structType VAR2)
{
 int VAR3 = VAR2.VAR4;
 if (VAR3 != -1)
 {
 /* FLAW: Attempt to close the file using fclose() instead of close() */
 fclose((VAR5 *)VAR3);
 }
}
#endif
