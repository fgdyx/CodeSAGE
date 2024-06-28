#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 /* POTENTIAL FLAW: Use of data that may have been deleted */
 FUN2(VAR4->VAR5);
}
#endif
