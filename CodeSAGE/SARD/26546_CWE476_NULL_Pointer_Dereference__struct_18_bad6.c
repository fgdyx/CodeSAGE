#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3;
 goto VAR4;
VAR4:
 /* POTENTIAL FLAW: Set data to NULL */
 VAR3 = NULL;
 goto VAR5;
VAR5:
 /* POTENTIAL FLAW: Attempt to use data, which may be NULL */
 FUN2(VAR3->VAR6);
}
#endif
