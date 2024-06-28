#ifndef VAR1
void FUN1(int &VAR2)
{
 /* POTENTIAL FLAW: Use an invalid index */
 VAR2 = 10;
}
#endif
