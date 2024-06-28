#ifndef VAR1
void FUN1(CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 CWE176_Improper_Handling_of_Unicode_Encoding__w32_67_structType VAR2;
 wchar_t VAR4[100];
 VAR3 = VAR4;
 /* POTENTIAL FLAW: Initialize data as a large unicode string that will cause a buffer overflow in the bad sink */
 wcscpy(VAR3, VAR5"");
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
#endif
