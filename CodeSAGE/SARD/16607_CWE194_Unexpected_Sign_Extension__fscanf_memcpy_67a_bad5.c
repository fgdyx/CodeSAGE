#ifndef VAR1
void FUN1(CWE194_Unexpected_Sign_Extension__fscanf_memcpy_67_structType VAR2);
void FUN2()
{
 short VAR3;
 CWE194_Unexpected_Sign_Extension__fscanf_memcpy_67_structType VAR2;
 VAR3 = 0;
 /* FLAW: Use a value input from the console using fscanf() */
 fscanf (stdin, "", &VAR3);
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
