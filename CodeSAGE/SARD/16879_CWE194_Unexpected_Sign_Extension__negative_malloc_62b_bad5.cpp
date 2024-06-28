#ifndef VAR1
void FUN1(short &VAR2)
{
 /* FLAW: Use a negative number */
 VAR2 = -1;
}
#endif
