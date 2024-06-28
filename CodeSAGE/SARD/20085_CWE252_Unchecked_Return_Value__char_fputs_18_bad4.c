#ifndef VAR1
void FUN1()
{
 goto VAR2;
VAR2:
 /* FLAW: Do not check the return value */
 fputs("", VAR3);
}
#endif
