#ifndef VAR1
void FUN1(CWE404_Improper_Resource_Shutdown__open_fclose_67_structType VAR2);
void FUN2()
{
 int VAR3;
 CWE404_Improper_Resource_Shutdown__open_fclose_67_structType VAR2;
 VAR3 = -1;
 /* POTENTIAL FLAW: Open a file - need to make sure it is closed properly in the sink */
 VAR3 = FUN3("", VAR4|VAR5, VAR6|VAR7);
 VAR2.VAR8 = VAR3;
 FUN1(VAR2);
}
#endif
