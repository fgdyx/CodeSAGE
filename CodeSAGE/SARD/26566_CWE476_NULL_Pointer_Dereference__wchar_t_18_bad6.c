#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 goto VAR3;
VAR3:
 /* POTENTIAL FLAW: Set data to NULL */
 VAR2 = NULL;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR2[0]);
}
#endif
