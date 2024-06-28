#ifndef VAR1
void FUN1(int &VAR2)
{
 /* FLAW: Use a negative number */
 VAR2 = -1;
}
#endif
